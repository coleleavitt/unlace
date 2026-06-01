__int64 __fastcall sub_83C340(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  int v8; // eax
  unsigned int v10; // [rsp+Ch] [rbp-2Ch]
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  sub_83C290((__int64)a1);
  a1[1] = a2;
  v3 = qcalloc(a2, 4);
  v4 = a1[1];
  a1[2] = v3;
  a1[3] = qcalloc(v4, 4);
  v5 = 0;
  if ( !a1[1] )
    return 0;
  do
  {
    *(_DWORD *)(a1[2] + 4 * v5) = -1;
    *(_DWORD *)(a1[3] + 4 * v5) = -1;
    v6 = a1[1];
    ++v5;
  }
  while ( v5 < v6 );
  if ( !v6 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = qpipe_create(v11);
    if ( v8 )
      break;
    *(_DWORD *)(a1[2] + 4 * v7) = v11[0];
    *(_DWORD *)(a1[3] + 4 * v7++) = HIDWORD(v11[0]);
    if ( v7 >= a1[1] )
      return 0;
  }
  v10 = v8;
  sub_83C290((__int64)a1);
  return v10;
}
