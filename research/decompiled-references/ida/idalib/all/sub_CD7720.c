__int64 __fastcall sub_CD7720(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+8h] [rbp-A0h]
  char v19; // [rsp+14h] [rbp-94h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v22[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-58h] BYREF
  int v24; // [rsp+70h] [rbp-38h]
  char v25; // [rsp+78h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 1328);
  v20 = a2;
  v23[2] = v3;
  v19 = a3;
  v23[1] = a1;
  v23[3] = 0;
  v24 = 1;
  *(_QWORD *)(a1 + 1328) = v23;
  v23[0] = &off_2B4B698;
  v25 = 0;
  if ( !a3 )
  {
    v22[0] = a2 | 4;
    a2 = v20;
    if ( !(unsigned __int8)sub_D00060(a1, v22) )
    {
      v5 = 0;
      goto LABEL_6;
    }
  }
  v22[1] = a1;
  v22[0] = &v19;
  v22[2] = &v20;
  v22[3] = v23;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 13 && ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
    {
      v5 = 0;
      goto LABEL_6;
    }
    v21 = v20 | 4;
    v5 = sub_CFF710(a1, &v21);
    if ( !(_BYTE)v5 )
      goto LABEL_6;
LABEL_10:
    v5 = sub_CB7380((__int64)v22);
    goto LABEL_6;
  }
  v7 = 13;
  if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
    v8 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
    v9 = HIDWORD(v8);
    if ( !BYTE4(v8) )
    {
      v21 = v20 | 2;
      v10 = sub_CBCD40(a1, (__int64 *)&v21, 0, 0, 1, 0);
      v5 = HIDWORD(v10);
      if ( BYTE4(v10) )
      {
        v11 = *(unsigned int *)(a1 + 1384);
        v12 = (unsigned int)v10;
        if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1388) )
        {
          v18 = v10;
          sub_2237220(a1 + 1376, a1 + 1392, v11 + 1, 16);
          v11 = *(unsigned int *)(a1 + 1384);
          LODWORD(v10) = v18;
        }
        v13 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v11);
        *v13 = 2;
        v14 = v20;
        v13[1] = v12;
        ++*(_DWORD *)(a1 + 1384);
        v21 = v14 | 4;
        if ( (unsigned __int8)sub_CFF720(a1, (unsigned int)v10, &v21)
          && (unsigned __int8)sub_CD6B90(a1, v20, v15, v16, v17)
          && (v21 = v20 | 4, (unsigned __int8)sub_D00E60(a1, &v21)) )
        {
          v21 = v20 | 4;
          v5 = sub_D08A50(a1, &v21);
          if ( (_BYTE)v5 )
            v5 = sub_CB7380((__int64)v22);
        }
        else
        {
          v5 = v9;
        }
        --*(_DWORD *)(a1 + 1384);
      }
      else if ( (unsigned __int8)sub_CB7380((__int64)v22) )
      {
        v21 = v20 | 4;
        sub_D00060(a1, &v21);
      }
      goto LABEL_6;
    }
    v7 = v8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( (_BYTE)v5 )
  {
    v21 = v20 | 4;
    v5 = sub_D4B810(a1, v7, &v21);
    if ( (_BYTE)v5 )
      goto LABEL_10;
  }
LABEL_6:
  sub_CBB4F0((__int64)v23);
  return v5;
}
