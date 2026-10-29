__int64 __fastcall sub_1B10540(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  void **v7; // rbx
  int v8; // edx
  _DWORD *v9; // rbp
  _DWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // [rsp+10h] [rbp-198h] BYREF
  __int64 v21; // [rsp+18h] [rbp-190h] BYREF
  void *v22; // [rsp+20h] [rbp-188h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-180h]
  char v24; // [rsp+2Ch] [rbp-17Ch]
  void *v25; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-170h]
  char v27; // [rsp+3Ch] [rbp-16Ch]
  __int16 v28; // [rsp+40h] [rbp-168h] BYREF
  __int64 v29; // [rsp+48h] [rbp-160h]
  unsigned int v30; // [rsp+50h] [rbp-158h] BYREF
  char v31; // [rsp+54h] [rbp-154h]
  void *v32; // [rsp+58h] [rbp-150h]
  unsigned int v33; // [rsp+60h] [rbp-148h]
  char v34; // [rsp+64h] [rbp-144h]
  __int16 v35; // [rsp+90h] [rbp-118h] BYREF
  __int64 v36; // [rsp+98h] [rbp-110h]
  unsigned int v37; // [rsp+A0h] [rbp-108h] BYREF
  char v38; // [rsp+A4h] [rbp-104h]
  void *v39; // [rsp+A8h] [rbp-100h]
  unsigned int v40; // [rsp+B0h] [rbp-F8h]
  char v41; // [rsp+B4h] [rbp-F4h]
  _BYTE v42[200]; // [rsp+E0h] [rbp-C8h] BYREF

  v4 = (__int64)&a2[a3];
  if ( (__int64 *)v4 == a2 )
  {
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(*a2 + 8);
    if ( v8 == 89 )
    {
      v6 = *a2;
    }
    else if ( v8 == 96 )
    {
      v5 = *a2;
    }
    LOBYTE(v8) = v6 != 0;
    LODWORD(v7) = v8;
    LOBYTE(v7) = v5 != 0 && v6 != 0;
    if ( (_BYTE)v7 )
      break;
    if ( (__int64 *)v4 == ++a2 )
      return (unsigned int)v7;
  }
  v9 = *(_DWORD **)(v5 + 16);
  LODWORD(v7) = 0;
  if ( ((*v9 >> 14) & 0xF) == 0 )
  {
    v10 = *(_DWORD **)(v6 + 16);
    LODWORD(v7) = 0;
    if ( (*v10 & 0x3C000) == 0 )
    {
      v28 = 0;
      v35 = 0;
      v11 = *(_QWORD *)(a1 + 248);
      v29 = 0;
      v30 = 0;
      v31 &= ~1u;
      v36 = 0;
      v37 = 0;
      v38 &= ~1u;
      sub_C3F220((unsigned __int64)v9, (__int64)&v28, v11, 0, 0, v4);
      sub_C3F220((unsigned __int64)v10, (__int64)&v35, *(_QWORD *)(a1 + 248), 0, 0, v12);
      v23 = v33;
      v7 = &v22;
      if ( v33 > 0x40 )
        sub_2205510(&v22);
      else
        v22 = v32;
      v13 = v34;
      v24 = v34;
      v26 = v40;
      if ( v40 > 0x40 )
      {
        sub_2205510(&v25);
        v13 = v24;
      }
      else
      {
        v25 = v39;
      }
      v27 = v41;
      if ( v13 )
        LOBYTE(v7) = (int)sub_2205DB0(&v22, &v25) > 0;
      else
        LOBYTE(v7) = (int)sub_2205E20(&v22, &v25) > 0;
      if ( (_BYTE)v7 )
      {
        v18 = sub_C00A40((unsigned __int64)v9, (__int64)&v25, v14, v15, v16);
        sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), v18, 0x122Fu, 0);
        v20 = sub_EEC8C0((unsigned __int64)v9, a1 + 8, a4);
        v19 = sub_1587DB0((__int64)v42, &v20);
        v21 = sub_EEC8C0((unsigned __int64)v10, (__int64)&v20, a4);
        sub_1587DB0(v19, &v21);
        sub_15F7200(v42);
        if ( v26 > 0x40 )
        {
LABEL_19:
          if ( v25 )
            operator delete[](v25);
        }
      }
      else if ( v26 > 0x40 )
      {
        goto LABEL_19;
      }
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
      if ( v37 > 1 )
        sub_A4F8E0((int *)&v37);
      if ( v30 > 1 )
        sub_A4F8E0((int *)&v30);
    }
  }
  return (unsigned int)v7;
}
