__int64 __fastcall sub_215A300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        int a9,
        int a10,
        __int16 a11)
{
  __int64 v11; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 v25; // rax
  __int64 *v26; // rdx
  char v27; // dl
  const char *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-140h]
  __int64 v30; // [rsp+10h] [rbp-138h] BYREF
  __int64 v31; // [rsp+18h] [rbp-130h] BYREF
  _QWORD *v32; // [rsp+20h] [rbp-128h]
  __int64 v33; // [rsp+28h] [rbp-120h]
  __int64 *v34; // [rsp+30h] [rbp-118h]
  __int64 v35; // [rsp+40h] [rbp-108h]
  _QWORD v36[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v37; // [rsp+70h] [rbp-D8h]
  _QWORD v38[4]; // [rsp+80h] [rbp-C8h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-A8h]
  _QWORD v40[4]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v41; // [rsp+D0h] [rbp-78h]
  _QWORD v42[4]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v43; // [rsp+100h] [rbp-48h]

  v17 = a3;
  if ( (unsigned __int8)sub_2247970(a2, a3, 10, v42) )
  {
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 80LL))(a4);
    v24 = a11;
    if ( (_BYTE)a11 )
    {
      if ( (_BYTE)a11 == 1 )
      {
        v17 = 259;
        v11 = v36[1];
        v27 = 3;
        v28 = "characters in ";
        v36[0] = "characters in ";
        v37 = 259;
      }
      else
      {
        if ( HIBYTE(a11) == 1 )
        {
          v26 = a7;
          v29 = a8;
        }
        else
        {
          v26 = (__int64 *)&a7;
          v24 = 2;
        }
        v17 = v29;
        LOBYTE(v37) = 3;
        v36[0] = "characters in ";
        v36[3] = v29;
        v36[2] = v26;
        v27 = 2;
        HIBYTE(v37) = v24;
        v28 = (const char *)v36;
      }
      v38[0] = v28;
      v21 = 2818;
      v38[2] = " field in archive member header are not all decimal numbers: '";
      v40[0] = v38;
      v41 = 1282;
      v42[0] = v40;
      LOBYTE(v39) = v27;
      v20 = 770;
      v42[2] = "' for the archive member header at offset ";
      v38[1] = v11;
      HIBYTE(v39) = 3;
      v40[1] = 0;
      v40[2] = a2;
      v40[3] = a3;
      v42[1] = 0;
      v43 = 770;
      v32 = v42;
      v33 = 0;
      v34 = &v30;
      LOWORD(v35) = 2818;
    }
    else
    {
      v22 = 256;
      v23 = 256;
      v37 = 256;
      v39 = 256;
      v41 = 256;
      v43 = 256;
      LOWORD(v35) = 256;
    }
    sub_2158040(&v31, v17, v20, v21, v22, v23, (char)v32);
    v25 = v31;
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v25;
  }
  else
  {
    v18 = v42[0];
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v18;
  }
  return a1;
}
