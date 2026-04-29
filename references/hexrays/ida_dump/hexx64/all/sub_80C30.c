unsigned __int64 __fastcall sub_80C30(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = -*a1;
  if ( *a1 > 0 )
    v2 = *a1;
  *(_QWORD *)&v3 = *a1;
  *((_QWORD *)&v3 + 1) = v2;
  sub_7F940(a2, v3 >> 63);
  v4 = -a1[1];
  if ( a1[1] > 0 )
    v4 = a1[1];
  *(_QWORD *)&v5 = a1[1];
  *((_QWORD *)&v5 + 1) = v4;
  sub_7F940(a2, v5 >> 63);
  v6 = -a1[2];
  if ( a1[2] > 0 )
    v6 = a1[2];
  *(_QWORD *)&v7 = a1[2];
  *((_QWORD *)&v7 + 1) = v6;
  sub_7F940(a2, v7 >> 63);
  v8 = pack_dd(&v10, v11, (unsigned int)(*((_DWORD *)a1 + 6) + 1));
  sub_7F760(a2, (__int64)&v10, v8 - (_QWORD)&v10);
  return sub_7F8E0(a2, *((_DWORD *)a1 + 7) + 1);
}
