__int64 __fastcall sub_249F0(__int64 a1, _DWORD **a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  _DWORD *v10; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a6 )
    *a6 = 0;
  v10 = *(_DWORD **)(a1 + 8);
  v12[0] = 0;
  sub_24510(v10, a3, 1u, (int *)v12);
  return sub_218E0(
           *(_QWORD *)(a1 + 8),
           LODWORD(v12[0]),
           (unsigned int)(HIDWORD(v12[0]) - LODWORD(v12[0])),
           a2,
           a4,
           a5,
           a6);
}
