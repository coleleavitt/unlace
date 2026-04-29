__int64 __fastcall sub_228E60(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbx
  int v5; // r15d
  unsigned int v6; // eax
  __int64 v7; // r12
  int *v8; // r14
  int v10; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v11 = __readfsqword(0x28u);
  v5 = a4;
  v10 = 0;
  if ( a4 == -1 )
    v5 = 1;
  copy_argloc();
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 <= 0x10 )
    v6 = getinf();
  if ( v6 != 176 && v6 != 256 )
    getinf_flag();
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
LABEL_14:
    LODWORD(v4) = -1;
  }
  else
  {
    v7 = 104LL * a2;
    while ( 1 )
    {
      v8 = (int *)(v7 + *(_QWORD *)(a1 + 432));
      if ( sub_228C90(a1, (__int64)v8) )
      {
        if ( (unsigned __int8)sub_1C4AE0(v8, v8[22], &v10, v5) )
          break;
      }
      ++v4;
      v7 += 104;
      if ( v4 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_14;
    }
  }
  cleanup_argloc();
  return (unsigned int)v4;
}
