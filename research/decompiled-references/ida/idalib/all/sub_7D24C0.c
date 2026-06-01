__int64 __fastcall sub_7D24C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  void *v4; // rdi
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = deref_idcv(a1, 0);
  if ( v2 )
  {
    ptr = nullptr;
    v10 = 0;
    if ( a2 )
    {
      v3 = nullptr;
      if ( a2 != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, a2 + 1, 1);
        memset((char *)ptr + v10, 0, a2 + 1 - v10);
        *(_QWORD *)&v10 = a2 + 1;
        v3 = ptr;
      }
      v3[a2] = 0;
    }
    if ( *(_BYTE *)v2 == 7 )
    {
      v4 = *(void **)(v2 + 8);
      v5 = *(_QWORD *)(v2 + 24);
    }
    else
    {
      free_idcv(v2);
      *(_BYTE *)v2 = 7;
      v5 = 0;
      v4 = nullptr;
    }
    v6 = ptr;
    ptr = v4;
    v2 += 8;
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v2 + 8) = v10;
    v7 = *((_QWORD *)&v10 + 1);
    *((_QWORD *)&v10 + 1) = v5;
    *(_QWORD *)(v2 + 16) = v7;
    if ( v4 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v4);
    }
  }
  return v2;
}
