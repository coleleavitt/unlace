__int64 __fastcall sub_16CD5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // dl
  _QWORD *v7; // rbx
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 *v13; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-30h]
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]
  char v17; // [rsp+14h] [rbp-24h]

  sub_16CD300((__int64)&ptr, "c_str", 5u, a1, *(_QWORD *)(a2 + 8), a6);
  v6 = v17;
  v7 = ptr;
  if ( v17 )
    v8 = (unsigned __int64 *)((char *)ptr + 8 * v16);
  else
    v8 = (unsigned __int64 *)((char *)ptr + 8 * v15);
  if ( ptr != v8 )
  {
    v9 = *(_QWORD *)ptr;
    if ( *(_QWORD *)ptr < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_11;
    v10 = (unsigned __int64 *)((char *)ptr + 8);
    while ( 1 )
    {
      v7 = v10;
      if ( v8 == v10 )
        break;
      v9 = *v10++;
      if ( v9 < 0xFFFFFFFFFFFFFFFELL )
      {
LABEL_11:
        while ( (unsigned int)sub_B770E0(v9, (__int64)"c_str") )
        {
          if ( v7 + 1 == v8 )
            goto LABEL_17;
          v9 = v7[1];
          if ( v9 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v13 = v7 + 2;
            while ( 1 )
            {
              v7 = v13;
              if ( v13 == v8 )
                break;
              v9 = *v13++;
              if ( v9 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_11;
            }
LABEL_17:
            v6 = v17;
            goto LABEL_8;
          }
          ++v7;
        }
        v11 = 1;
        if ( v17 )
          return v11;
        goto LABEL_20;
      }
    }
  }
LABEL_8:
  v11 = 0;
  if ( v6 )
    return v11;
LABEL_20:
  free(ptr);
  return v11;
}
