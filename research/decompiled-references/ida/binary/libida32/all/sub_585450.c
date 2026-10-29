unsigned __int64 __fastcall sub_585450(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int *v2; // rbx
  unsigned int v3; // r14d
  unsigned int v4; // eax
  int v6; // [rsp+Bh] [rbp-3Dh] BYREF
  char v7; // [rsp+Fh] [rbp-39h]
  int v8; // [rsp+10h] [rbp-38h] BYREF
  char v9; // [rsp+14h] [rbp-34h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v1 = a1[1];
  v10 = __readfsqword(0x28u);
  v2 = *a1;
  if ( 4LL * (_QWORD)v1 )
  {
    do
    {
      v3 = *v2;
      v4 = ea2node(*v2);
      if ( (unsigned __int64)netnode_supval(v4, 27, &v6, 5, 83) > 4 )
      {
        v8 = v6;
        v9 = v7;
        set_xrefpos(v3, &v8);
      }
      ++v2;
    }
    while ( v2 != &(*a1)[(_QWORD)a1[1]] );
  }
  return v10 - __readfsqword(0x28u);
}

