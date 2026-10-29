__int64 __fastcall sub_2E600(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // rdi
  int v8; // eax
  void *v9; // r12
  size_t v10; // rdx
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  int v15[2]; // [rsp+28h] [rbp-20h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    if ( a4 == 2 )
      sub_2E160(v4, 3, *(void **)a2, *(_DWORD *)(a2 + 8));
    else
      sub_2E160(v4, 3, (void *)a2, a3);
    return 1;
  }
  v5 = *(unsigned __int8 *)(a1 + 12);
  if ( (_BYTE)v5 )
    return 0;
  v7 = *(_QWORD *)a1;
  if ( a4 == 2 )
  {
    LOBYTE(v5) = (unsigned int)sub_2D470(v7, a2) == 3;
    return v5;
  }
  ptr = nullptr;
  v14 = 0;
  v8 = sub_2D470(v7, (__int64)&ptr);
  v9 = ptr;
  v10 = a3;
  if ( v8 == 3 )
  {
    if ( a3 >= (unsigned __int64)v14 )
    {
      if ( !(_QWORD)v14 )
        goto LABEL_18;
      v10 = v14;
    }
    else if ( a4 != 1 )
    {
      goto LABEL_9;
    }
    memcpy((void *)a2, ptr, v10);
LABEL_18:
    v5 = 1;
  }
LABEL_9:
  if ( v9 )
  {
    *(_QWORD *)&v14 = 0;
    j__free(v9);
  }
  return v5;
}

