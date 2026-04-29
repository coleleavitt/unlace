unsigned __int64 __fastcall sub_D1610(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  char v8; // r12
  int v9; // ebp
  __int64 v10; // rax
  __int64 *v11; // rbx
  unsigned int tinfo_size; // eax
  int v13; // r9d
  int v15; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 72);
  v16 = __readfsqword(0x28u);
  sub_D0460((__int64)a2, a3, v6);
  v8 = (*(_BYTE *)(a4 + 25) & 2) == 0;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = (__int64 *)(*(_QWORD *)a4 + 80 * v10);
      tinfo_size = get_tinfo_size(&v15, v11[8], 0);
      v13 = v9++;
      sub_D06A0(a1, a2, v11, tinfo_size, v15, v13, 1, v8);
      v10 = v9;
    }
    while ( (unsigned __int64)v9 < *(_QWORD *)(a4 + 8) );
  }
  return v16 - __readfsqword(0x28u);
}
