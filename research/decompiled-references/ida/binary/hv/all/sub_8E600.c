__int64 __fastcall sub_8E600(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rax
  void *v11; // rdx
  size_t v12; // rcx
  size_t v13; // rbp
  void *v14; // rdi
  void *v15; // rdi
  void *v17; // rdi
  size_t v18; // rdx
  void *v19; // [rsp+0h] [rbp-68h]
  size_t v20; // [rsp+0h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = *a3;
  v24 = __readfsqword(0x28u);
  v5 = a1[1];
  if ( v3 >= v5 )
    return 0;
  v6 = *a1;
  v7 = v3;
  while ( 1 )
  {
    v8 = v7++;
    v9 = *(_BYTE *)(v6 + v7 - 1);
    if ( v9 == 10 )
      break;
    if ( v9 == 13 && v7 < v5 )
    {
      if ( *(_BYTE *)(v6 + v7) == 10 )
      {
        v7 = v8 + 2;
        break;
      }
    }
    else if ( v7 == v5 )
    {
      v8 = v7;
      break;
    }
  }
  v10 = 0;
  v11 = nullptr;
  v12 = v8 - v3;
  ptr = nullptr;
  v13 = v12;
  v23 = 0;
  if ( v12 )
  {
    v17 = nullptr;
    v18 = v12 + 1;
    if ( v12 != -1 )
    {
      v20 = v12 + 1;
      ptr = (void *)sub_96080(&ptr, 0, v18, 1);
      v18 = v20;
      v17 = ptr;
    }
    *(_QWORD *)&v23 = v18;
    memmove(v17, (const void *)(v6 + v3), v13);
    *((_BYTE *)ptr + v13) = 0;
    v11 = ptr;
    v10 = *((_QWORD *)&v23 + 1);
    v13 = v23;
  }
  v14 = *(void **)a2;
  ptr = nullptr;
  v23 = 0;
  if ( v14 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v21 = v10;
    v19 = v11;
    j__free(v14);
    *(_QWORD *)(a2 + 8) = v13;
    v15 = ptr;
    *(_QWORD *)a2 = v19;
    *(_QWORD *)(a2 + 16) = v21;
    if ( v15 )
    {
      *(_QWORD *)&v23 = 0;
      j__free(v15);
    }
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_QWORD *)(a2 + 8) = v13;
    *(_QWORD *)(a2 + 16) = v10;
  }
  *a3 = v7;
  return 1;
}

