__int64 __fastcall sub_14AD6A0(__int64 a1, __m128i a2, __m128 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int16 v8; // ax
  __int64 v9; // rbx
  unsigned int v11; // edx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-138h]
  __int64 v23; // [rsp+18h] [rbp-120h] BYREF
  _BYTE *v24; // [rsp+20h] [rbp-118h] BYREF
  char v25; // [rsp+28h] [rbp-110h]
  __int64 v26; // [rsp+30h] [rbp-108h]
  int v27; // [rsp+38h] [rbp-100h]
  __int16 v28; // [rsp+3Ch] [rbp-FCh]
  __int64 (__fastcall *v29)(__int64); // [rsp+40h] [rbp-F8h]
  __int64 v30; // [rsp+48h] [rbp-F0h]
  __int64 v31; // [rsp+50h] [rbp-E8h]
  __int64 v32; // [rsp+60h] [rbp-D8h] BYREF
  void *v33; // [rsp+68h] [rbp-D0h]
  __int64 v34; // [rsp+70h] [rbp-C8h]
  _BYTE v35[16]; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+88h] [rbp-B0h] BYREF
  void *v37; // [rsp+90h] [rbp-A8h]
  __int64 v38; // [rsp+98h] [rbp-A0h]
  _BYTE v39[16]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-88h] BYREF
  void *v41; // [rsp+B8h] [rbp-80h]
  __int64 v42; // [rsp+C0h] [rbp-78h]
  _BYTE v43[16]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-60h] BYREF
  void *ptr; // [rsp+E0h] [rbp-58h]
  __int64 v46; // [rsp+E8h] [rbp-50h]
  _BYTE v47[72]; // [rsp+F0h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 3 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v20 + 760) )
    {
      *(_BYTE *)(v20 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v20 + 48) + 6LL) = 1;
      v20 = *(_QWORD *)(a1 + 8);
    }
    v21 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    v9 = 0;
    sub_172A9A0(*(_QWORD *)(v21 + 656), *(_QWORD *)(v21 + 608), *(_BYTE *)(v20 + 744) != 0 ? 0xF : 0);
  }
  else
  {
    sub_146B5E0(&v23, a1, 8u, 1, 0);
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 96);
    if ( *(_WORD *)(a1 + 32) == 24 )
      v5 = *(unsigned int *)(a1 + 16);
    v7 = *(__int64 **)(v6 + 608);
    v22 = sub_1A7EED0(v6, v7, v4, v5);
    v8 = *(_WORD *)(a1 + 32);
    if ( v8 == 24 )
    {
      v26 = a1;
      v11 = *(unsigned __int16 *)(a1 + 92);
      v24 = (_BYTE *)(a1 + 1952);
      v12 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v25 = v12;
      v28 = 63;
      v29 = sub_1478A90;
      v13 = *(_QWORD *)(a1 + 8);
      v27 = 1638424;
      v30 = 0;
      v14 = *(_QWORD *)(v13 + 56);
      v31 = 0;
      if ( v11 >= *(_DWORD *)(v14 + 144) )
        sub_1568800(&v24);
      else
        LODWORD(v31) = sub_1478A90(a1);
LABEL_20:
      v18 = *(unsigned __int16 *)(a1 + 32);
      v19 = (unsigned int)(v18 - 456);
      if ( (unsigned __int16)(v18 - 456) <= 2u )
      {
        while ( !(unsigned __int8)sub_15686D0(a1) )
        {
          LOWORD(v18) = *(_WORD *)(a1 + 32);
          if ( (_WORD)v18 == 1 )
            break;
LABEL_22:
          if ( (_WORD)v18 == 25 )
            break;
          v32 = 0;
          v33 = v35;
          v34 = 0x200000000LL;
          v36 = a1 + 504;
          v37 = v39;
          v38 = 0x200000000LL;
          if ( (unsigned __int16)(v18 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
            sub_14AB020(a1, (unsigned int *)&v32, a2, a3);
          v44 = a1 + 504;
          v40 = 0;
          v41 = v43;
          v42 = 0x200000000LL;
          ptr = v47;
          v46 = 0x200000000LL;
          sub_156E800(a1, &v32, &v40, 0);
          sub_15DCED0(v44, &v44);
          if ( ptr != v47 )
            free(ptr);
          if ( v41 != v43 )
            free(v41);
          v7 = &v36;
          sub_15DCED0(v36, &v36);
          if ( v37 != v39 )
            free(v37);
          if ( v33 == v35 )
            goto LABEL_20;
          free(v33);
          v18 = *(unsigned __int16 *)(a1 + 32);
          v19 = (unsigned int)(v18 - 456);
          if ( (unsigned __int16)(v18 - 456) > 2u )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        if ( (_WORD)v18 != 1 )
          goto LABEL_22;
      }
      sub_14808E0((__int64)&v24, v7, v19, v15, v16, v17);
      v9 = sub_1A7DED0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v22, HIDWORD(v31));
      *v24 = v25;
    }
    else
    {
      v32 = 0;
      v36 = a1 + 504;
      v33 = v35;
      v34 = 0x200000000LL;
      v37 = v39;
      v38 = 0x200000000LL;
      if ( (unsigned __int16)(v8 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_14AB020(a1, (unsigned int *)&v32, a2, a3);
      v44 = a1 + 504;
      v41 = v43;
      v40 = 0;
      v42 = 0x200000000LL;
      ptr = v47;
      v46 = 0x200000000LL;
      sub_156E800(a1, &v32, &v40, 0);
      v9 = sub_1A7DED0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v22, 0);
      sub_15DCED0(v44, &v44);
      if ( ptr != v47 )
        free(ptr);
      if ( v41 != v43 )
        free(v41);
      sub_15DCED0(v36, &v36);
      if ( v37 != v39 )
        free(v37);
      if ( v33 != v35 )
        free(v33);
    }
    if ( v23 )
      sub_1564F70(v23);
  }
  return v9;
}
