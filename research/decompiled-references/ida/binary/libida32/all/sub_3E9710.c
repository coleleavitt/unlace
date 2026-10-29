char *__fastcall sub_3E9710(__int64 a1, char a2)
{
  int v4; // ebp
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  void *v10; // rdi
  char *v11; // r14
  char *v12; // r12
  int v13; // esi
  int v14; // [rsp+0h] [rbp-38h]
  int v15; // [rsp+4h] [rbp-34h] BYREF
  void *v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+10h] [rbp-28h]
  int v18; // [rsp+18h] [rbp-20h]
  int v19; // [rsp+20h] [rbp-18h]
  int v20; // [rsp+28h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-8h]

  v16 = (void *)__readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 797) && *(int *)(a1 + 792) <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 800);
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 800) = 1;
      if ( !a2 )
      {
        v5 = (*(__int64 (__fastcall **)(int *))(a1 + 768))(&v15);
        v10 = *(void **)(a1 + 808);
        v11 = (char *)v5;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 816) = 0;
          qfree(v10);
          *(_QWORD *)(a1 + 808) = 0;
          *(_QWORD *)(a1 + 824) = 0;
        }
        *(_QWORD *)(a1 + 832) = 0;
        if ( v11 )
        {
          if ( v15 > 0 )
          {
            v12 = v11;
            do
            {
              v13 = (int)v12;
              ++v4;
              v12 += 8;
              rangeset_t_add(a1 + 808, v13, v6, v7, v8, v9, v14, v16, v17, v18, v19, v20, v21);
            }
            while ( v4 < v15 );
          }
          qfree(v11);
        }
        if ( (unsigned __int8)netnode_inited() )
          sub_3E8A70((_QWORD *)a1);
      }
      *(_BYTE *)(a1 + 797) = 1;
      sub_3E9390(a1, 0xFFFFFFFF, -1);
      --*(_DWORD *)(a1 + 800);
    }
  }
  return (char *)v16 - __readfsqword(0x28u);
}

