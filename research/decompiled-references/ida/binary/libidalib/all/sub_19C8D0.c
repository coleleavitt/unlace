__int64 __fastcall sub_19C8D0(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  const void *v7; // r12
  void *v8; // rdi
  size_t v9; // rax
  size_t v10; // rbp
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  char v15[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+408h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 160);
  v16 = __readfsqword(0x28u);
  result = 0;
  if ( v3 )
  {
    switch ( a2 )
    {
      case 2:
        sub_19C680(*(_WORD *)(a1 + 170), v15, &elf_gnu_hash_indexes[50]);
        v9 = strlen(v15);
        v10 = v9;
        if ( v9 )
        {
          v11 = *(void **)a3;
          v12 = v9 + 1;
          if ( *(_QWORD *)(a3 + 16) < v9 + 1 )
          {
            v13 = qvector_reserve();
            *(_QWORD *)a3 = v13;
            v11 = (void *)v13;
          }
          *(_QWORD *)(a3 + 8) = v12;
          memmove(v11, v15, v10);
          *(_BYTE *)(*(_QWORD *)a3 + v10) = 0;
        }
        else
        {
          *(_QWORD *)(a3 + 8) = 0;
        }
        return 1;
      case 5:
        *(_DWORD *)a3 = *(_DWORD *)(a1 + 120);
        return 1;
      case 1:
        v6 = *(_QWORD *)(a1 + 184);
        if ( v6 > 1 )
        {
          if ( a3 != a1 + 176 )
          {
            v7 = *(const void **)(a1 + 176);
            v8 = *(void **)a3;
            if ( *(_QWORD *)(a3 + 16) < v6 )
            {
              v14 = qvector_reserve();
              *(_QWORD *)a3 = v14;
              v8 = (void *)v14;
            }
            *(_QWORD *)(a3 + 8) = v6;
            memmove(v8, v7, v6 - 1);
            *(_BYTE *)(*(_QWORD *)a3 + v6 - 1) = 0;
          }
          return 1;
        }
        break;
    }
  }
  return result;
}

