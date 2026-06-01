__int64 __fastcall sub_218DA10(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v23; // [rsp+18h] [rbp-A0h]
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  char v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h] BYREF
  char v27; // [rsp+38h] [rbp-80h]
  _QWORD *v28; // [rsp+40h] [rbp-78h] BYREF
  char v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  char v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]

  sub_21A2100(&v24);
  v6 = v24;
  if ( (v25 & 1) == 0 )
  {
    v8 = (__int64 *)(a2 + 56);
    v22 = v24;
    sub_218D9A0((__int64)&v26, (_QWORD *)(a2 + 56), (unsigned int)a3, HIDWORD(a3), v4, v5);
    v12 = v26;
    if ( (v27 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      v26 = 0;
      *(_QWORD *)a1 = v12;
      goto LABEL_12;
    }
    v13 = *(_WORD *)(v26 + 6);
    if ( !v13 || (unsigned __int16)(v13 + 15) <= 1u )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v22;
      goto LABEL_12;
    }
    sub_216F820((__int64)&v28, (_QWORD *)(a2 + 56), (unsigned int)a3, v9, v10, v11);
    if ( (v29 & 1) != 0 )
    {
      v17 = v28;
      *(_BYTE *)(a1 + 8) |= 1u;
      v28 = nullptr;
      *(_QWORD *)a1 = v17;
    }
    else
    {
      if ( *(_WORD *)(*(_QWORD *)(a2 + 56) + 16LL) == 1 )
      {
        v18 = *(_QWORD *)(a2 + 136);
        if ( v18 )
        {
          sub_21785D0((__int64)&v32, v8, v18, v14, v15, v16);
          if ( (v34 & 1) != 0 )
          {
            v21 = v32;
            *(_BYTE *)(a1 + 8) |= 1u;
            v32 = 0;
            *(_QWORD *)a1 = v21;
            sub_216EFE0(&v32);
            goto LABEL_10;
          }
          v18 = v32;
          v23 = v33;
          sub_216EFE0(&v32);
          v19 = v23;
        }
        else
        {
          v19 = 0;
        }
        v32 = v18;
        v33 = v19;
        LOBYTE(v34) = 1;
        v35 = 0;
        sub_2178ED0((__int64)&v30, v8, v26, v28, v15, v16, v18, v19, v34, 0);
        v20 = v30;
        if ( (v31 & 1) != 0 )
        {
          *(_BYTE *)(a1 + 8) |= 1u;
          *(_QWORD *)a1 = v20;
          v30 = 0;
          sub_216F910(&v30);
          goto LABEL_10;
        }
        if ( v30 )
          v22 += *(_QWORD *)(v30 + 16);
        sub_216F910(&v30);
      }
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v22;
    }
LABEL_10:
    sub_216F910((__int64 *)&v28);
LABEL_12:
    sub_218AB00(&v26);
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 8) |= 1u;
  v24 = 0;
  *(_QWORD *)a1 = v6;
LABEL_3:
  sub_A0AE70(&v24);
  return a1;
}
