unsigned __int64 __fastcall sub_143F10(TView *a1, char a2)
{
  __int64 v2; // rdx
  const char *v3; // rax
  __int64 Bounds; // rax
  unsigned __int16 v6; // cx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 (*v9)(); // rax
  __int64 (*v10)(); // rcx
  int v11; // eax
  int v12[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  int v14[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v14 = __readfsqword(0x28u);
  *(_QWORD *)v12 = 0;
  v13 = 0;
  if ( a2 )
  {
    Bounds = TView::getBounds(a1);
    v6 = Bounds;
    LOWORD(v13) = 1;
    v8 = (WORD2(Bounds) | (((unsigned __int16)v7 | (v7 >> 16) & 0xFFFF0000) << 16)) << 16;
    v2 = *(_QWORD *)a1;
    *(_QWORD *)v12 = v6 | (unsigned __int64)v8;
    v9 = *(__int64 (**)())(v2 + 216);
    if ( v9 != sub_143C30 )
    {
      if ( ((unsigned int (__fastcall *)(TView *))v9)(a1) )
        LOWORD(v13) = v13 | 2;
      v2 = *(_QWORD *)a1;
    }
    v10 = *(__int64 (**)())(v2 + 224);
    v11 = 0;
    if ( v10 != sub_143C40 )
    {
      v11 = ((__int64 (__fastcall *)(TView *))v10)(a1);
      v2 = *(_QWORD *)a1;
    }
    HIDWORD(v13) = v11;
    WORD1(v13) = 0;
  }
  else
  {
    v2 = *(_QWORD *)a1;
  }
  v3 = (const char *)(*(__int64 (__fastcall **)(TView *, _QWORD))(v2 + 192))(a1, 0);
  sub_10DA10(v3, a2, (__int64)v12);
  return *(_QWORD *)v14 - __readfsqword(0x28u);
}

