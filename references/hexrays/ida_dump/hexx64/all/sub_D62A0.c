unsigned __int64 __fastcall sub_D62A0(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int tinfo_size; // eax
  int v12; // r9d
  int v14; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 72);
  v15 = __readfsqword(0x28u);
  sub_D5020((__int64)a2, a3, v6);
  if ( a4[1] )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *a4 + 80 * v9;
      tinfo_size = get_tinfo_size(&v14, *(_QWORD *)(v10 + 24), 0);
      v12 = v8++;
      sub_D5260(a1, a2, (__int64 *)(v10 + 56), tinfo_size, v14, v12, 1, 1);
      v9 = v8;
    }
    while ( (unsigned __int64)v8 < a4[1] );
  }
  return v15 - __readfsqword(0x28u);
}
