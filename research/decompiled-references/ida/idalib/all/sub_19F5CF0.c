__int64 __fastcall sub_19F5CF0(__int64 a1, __int64 a2, int a3, int a4, double a5, double a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _WORD v13[2]; // [rsp+10h] [rbp-2028h] BYREF
  int v14; // [rsp+14h] [rbp-2024h]
  __int64 v15; // [rsp+18h] [rbp-2020h]
  int v16; // [rsp+20h] [rbp-2018h] BYREF
  __int64 v17; // [rsp+28h] [rbp-2010h]
  __int64 v18; // [rsp+30h] [rbp-2008h]
  int v19; // [rsp+38h] [rbp-2000h]
  __int64 v20; // [rsp+40h] [rbp-1FF8h]
  __int16 v21; // [rsp+48h] [rbp-1FF0h]
  _DWORD v22[2042]; // [rsp+50h] [rbp-1FE8h] BYREF

  v8 = *(_QWORD *)(a2 + 48);
  v20 = a2;
  v18 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 24);
  v21 = 0;
  v13[0] = 0;
  v14 = v8;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  sub_1A19220((unsigned int)v22, a1, (unsigned int)&v16, (unsigned int)v13, a3, a4, 0, 1);
  if ( v22[0]
    && (v11 = sub_1A1D600((unsigned int)v22, a1, (unsigned int)&v16, (unsigned int)v13, a3, a4, 0)
            & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v12 = sub_19A3EF0(a1, v11);
    sub_B73850(a2, v12);
    *(_BYTE *)(a2 + 96) = *(_BYTE *)(a2 + 96) & 0x9F | 0x20;
    v9 = 1;
    sub_17C8350(a1, (_BYTE *)a2, a5, a6);
  }
  else
  {
    v9 = 0;
  }
  sub_1A0BB10(v22);
  return v9;
}
