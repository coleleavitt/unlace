void __fastcall sub_1B13AB0(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbp
  int v19; // [rsp+4h] [rbp-114h] BYREF
  __int64 v20; // [rsp+8h] [rbp-110h] BYREF
  void *v21; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-100h]
  char v23; // [rsp+1Ch] [rbp-FCh]
  __int16 v24; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-F0h]
  unsigned int v26; // [rsp+30h] [rbp-E8h] BYREF
  char v27; // [rsp+34h] [rbp-E4h]
  void *v28; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-D8h]
  char v30; // [rsp+44h] [rbp-D4h]
  _BYTE v31[32]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int8 *v32; // [rsp+90h] [rbp-88h] BYREF
  char v33; // [rsp+E8h] [rbp-30h]
  char v34; // [rsp+F4h] [rbp-24h]

  v7 = (unsigned __int64)a2;
  v22 = 1;
  v21 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 &= ~1u;
  if ( (*(_DWORD *)a2 & 0x20000) != 0
    || (a2 = (void **)&v24, !(unsigned __int8)sub_C3F220(
                                                v7,
                                                (__int64)&v24,
                                                *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                                                0,
                                                0,
                                                a6)) )
  {
    if ( (*(_WORD *)v7 & 0x1FF) == 0x47 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL);
      if ( (v8 & 7) == 0 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v10 = *(unsigned int **)(v9 + 16);
          v11 = *v10;
          *(_QWORD *)(a1 + 536) = v10 + 4;
          *(_QWORD *)(a1 + 544) = v11;
        }
      }
    }
    else
    {
      v12 = sub_C00A40(v7, (__int64)a2, a3, a4, a5);
      sub_168B9F0((__int64)v31, (__int64 *)a1, v12, 0x64Eu, 0);
      sub_15F7200(v31);
    }
  }
  else
  {
    if ( v29 <= 0x40 )
    {
      v22 = v29;
      v21 = v28;
    }
    else
    {
      a2 = &v28;
      sub_22056A0(&v21, &v28);
    }
    v23 = v30;
    if ( !v30 && sub_1AE7A00((__int64 *)&v21) )
    {
      v17 = sub_C00A40(v7, (__int64)a2, v13, v14, v15);
      sub_168B9F0((__int64)v31, (__int64 *)a1, v17, 0x11CAu, 0);
      if ( v33 )
      {
        sub_AE9DF0(&v32, (__int64)"device_num", 1u);
      }
      else if ( v34 )
      {
        sub_1B132F0((__int64)v31, (__int64)"device_num");
      }
      v19 = 0;
      v18 = sub_1587D10((__int64)v31, &v19);
      v20 = sub_EEC8C0(v7, (__int64)&v19, a7);
      sub_1587DB0(v18, &v20);
      sub_15F7200(v31);
    }
    else
    {
      LODWORD(v16) = (_DWORD)v21;
      if ( v22 > 0x40 )
        v16 = *(_QWORD *)v21;
      *(_DWORD *)(a1 + 528) = v16;
    }
  }
  if ( v26 > 1 )
    sub_A4F8E0((int *)&v26);
  if ( v22 > 0x40 )
  {
    if ( v21 )
      operator delete[](v21);
  }
}
