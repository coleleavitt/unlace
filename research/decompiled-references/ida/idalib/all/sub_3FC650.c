char *__fastcall sub_3FC650(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  void *v12; // rdi
  char *v13; // r14
  char *v14; // r12
  int v15; // esi
  int v16; // [rsp+0h] [rbp-38h]
  int v17; // [rsp+4h] [rbp-34h] BYREF
  void *v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h]
  int v20; // [rsp+18h] [rbp-20h]
  int v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  v18 = (void *)__readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 805) && *(int *)(a1 + 800) <= 0 )
  {
    v6 = *(_DWORD *)(a1 + 808);
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 808) = 1;
      if ( !a2 )
      {
        v7 = (*(__int64 (__fastcall **)(int *))(a1 + 776))(&v17);
        v12 = *(void **)(a1 + 816);
        v13 = (char *)v7;
        if ( v12 )
        {
          *(_QWORD *)(a1 + 824) = 0;
          qfree(v12);
          *(_QWORD *)(a1 + 816) = 0;
          *(_QWORD *)(a1 + 832) = 0;
        }
        *(_QWORD *)(a1 + 840) = 0;
        if ( v13 )
        {
          if ( v17 > 0 )
          {
            v14 = v13;
            do
            {
              v15 = (int)v14;
              ++v6;
              v14 += 16;
              rangeset_t_add(a1 + 816, v15, v8, v9, v10, v11, v16, v18, v19, v20, v21, v22, v23);
            }
            while ( v6 < v17 );
          }
          qfree(v13);
        }
        if ( (unsigned __int8)netnode_inited() )
          sub_3FB9D0((_QWORD *)a1);
      }
      *(_BYTE *)(a1 + 805) = 1;
      sub_3FC2D0((__int64 *)a1, -1, -1, a4);
      --*(_DWORD *)(a1 + 808);
    }
  }
  return (char *)v18 - __readfsqword(0x28u);
}
