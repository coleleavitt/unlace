unsigned __int64 __fastcall sub_585390(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int *v2; // rbx
  unsigned int v3; // r14d
  unsigned int v4; // eax
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v1 = a1[1];
  v8 = __readfsqword(0x28u);
  v2 = *a1;
  if ( 4LL * (_QWORD)v1 )
  {
    do
    {
      v3 = *v2;
      v4 = ea2node(*v2);
      if ( (unsigned __int64)netnode_supval(v4, 4, &v6, 8, 83) > 7 )
      {
        v7 = v6;
        set_jumptable_info(v3, &v7);
      }
      ++v2;
    }
    while ( v2 != &(*a1)[(_QWORD)a1[1]] );
  }
  return v8 - __readfsqword(0x28u);
}

