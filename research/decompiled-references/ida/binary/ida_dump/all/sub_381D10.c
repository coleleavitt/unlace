__int64 __fastcall sub_381D10(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  _QWORD **v11; // rbx
  void *v12; // rdi
  unsigned __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v14; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v15[8]; // [rsp+10h] [rbp-78h] BYREF
  int v16; // [rsp+18h] [rbp-70h] BYREF
  void *v17; // [rsp+20h] [rbp-68h]
  int *v18; // [rsp+28h] [rbp-60h]
  int *v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 1128);
  v22 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v2 + 8);
  if ( !v3 )
    return 0;
  v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v4 )
  {
    v7 = 24;
LABEL_11:
    v8 = *(_DWORD *)(v7 + 64);
    v16 = 0;
    v17 = nullptr;
    v18 = &v16;
    v19 = &v16;
    v20 = 0;
    copy_tinfo_t();
    v13 = a2;
    v21 = v8;
    v14 = &v13;
    v9 = sub_37ED50((__m128i *)(v2 + 8), &v13, (__int64 **)&v14);
    v10 = v9 + 24;
    sub_36C440((_QWORD *)(v9 + 32), (__int64)v15);
    copy_tinfo_t();
    *(_QWORD *)(v10 + 64) = v21;
    clear_tinfo_t();
    v11 = (_QWORD **)v17;
    if ( v17 )
    {
      do
      {
        sub_36BBD0(v11[3]);
        v12 = v11;
        v11 = (_QWORD **)v11[2];
        operator delete(v12, 0x28u);
      }
      while ( v11 );
    }
    return 1;
  }
  if ( (*(_BYTE *)(*v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = v4 + 24;
    if ( a2 < v6 )
    {
      v4 = *(_QWORD *)(v4 + 8);
      goto LABEL_7;
    }
    if ( v6 >= a2 )
      break;
    v4 = *(_QWORD *)(v4 + 16);
LABEL_7:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return 0;
  }
  if ( v3 != (_QWORD *)v4 )
    goto LABEL_11;
  return 0;
}
