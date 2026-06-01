__int64 __fastcall sub_14A2C40(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rbp
  unsigned __int16 v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rdi
  int v13; // r13d
  __int64 *v14; // rdi
  unsigned int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _QWORD *v23; // r12
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rax
  void **v35; // r8
  __int64 result; // rax
  unsigned int v37; // ebp
  unsigned int v38; // r12d
  __int64 v39; // r13
  int v40; // eax
  __int64 v41; // [rsp+8h] [rbp-C0h]
  unsigned int v42; // [rsp+14h] [rbp-B4h]
  void *v43; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+28h] [rbp-A0h]
  char v45; // [rsp+2Ch] [rbp-9Ch]
  void *v46; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+38h] [rbp-90h]
  char v48; // [rsp+3Ch] [rbp-8Ch]
  void *v49; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-80h]
  _BYTE *v51; // [rsp+50h] [rbp-78h] BYREF
  char v52; // [rsp+58h] [rbp-70h]
  __int64 v53; // [rsp+60h] [rbp-68h]
  int v54; // [rsp+68h] [rbp-60h]
  __int16 v55; // [rsp+6Ch] [rbp-5Ch]
  __int64 (__fastcall *v56)(__int64); // [rsp+70h] [rbp-58h]
  __int64 v57; // [rsp+78h] [rbp-50h]
  __int64 v58; // [rsp+80h] [rbp-48h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL;
  if ( *(_WORD *)(a1 + 32) != 425 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD *)(v4 + 2944);
    if ( v5 >= *(unsigned int *)(v4 + 2912) )
    {
      if ( *(_WORD *)(sub_14180A0(v4, 1u) + 16) == 27 )
        goto LABEL_4;
    }
    else if ( *(_WORD *)(*(_QWORD *)(v4 + 2904) + 24 * v5 + 16) == 27 )
    {
LABEL_4:
      if ( *(_WORD *)(a1 + 32) != 1 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(v6 + 2944) + 1LL;
        v8 = v7 >= *(unsigned int *)(v6 + 2912)
           ? *(_WORD *)(sub_14180A0(v6, 2u) + 16)
           : *(_WORD *)(*(_QWORD *)(v6 + 2904) + 24 * v7 + 16);
        if ( v8 == 20 )
        {
          v9 = *(_QWORD *)(a1 + 96);
          v10 = *(_WORD *)(a1 + 32);
          sub_141A630(v10);
          v11 = sub_18013B0(v9, 0, 0, 0, 0, 1, 0, 0);
          if ( v11 )
          {
            v12 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v12, (int *)(a1 + 16));
            v13 = *(_DWORD *)(a1 + 40);
            v14 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v14, (int *)(a1 + 16));
            v15 = *(_DWORD *)(a1 + 40);
            v16 = *(_WORD *)(a1 + 32) == 20;
            v53 = a1;
            v42 = v15;
            v51 = (_BYTE *)(a1 + 1952);
            LOBYTE(v15) = *(_BYTE *)(a1 + 1952);
            v54 = 1376276;
            v52 = v15;
            v56 = sub_14789E0;
            *(_BYTE *)(a1 + 1952) = 1;
            v55 = 63;
            v57 = 0;
            v58 = 0;
            if ( v16 )
            {
              if ( (unsigned int)*(unsigned __int16 *)(a1 + 90) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)
                                                                             + 144LL) )
                sub_1568800(&v51);
              else
                LODWORD(v58) = sub_14789E0(a1);
            }
            v17 = sub_14C4CD0(a1);
            sub_14808E0((__int64)&v51, (__int64 *)((char *)&word_3E + 1), v18, v19, v20, v21);
            v22 = HIDWORD(v58);
            a2[40] = v13;
            a2[41] = v22;
            if ( v17 > 1 )
            {
              v35 = &v46;
            }
            else
            {
              v23 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
              v41 = sub_A63CE0(v23);
              v24 = sub_A63CE0(v23);
              v29 = sub_F65240(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), 63, v25, v26, v27, v28);
              v47 = 64;
              v46 = nullptr;
              v48 = !v29;
              v33 = sub_AAC1F0((__int64)v23, v24, v30, v31, v32);
              if ( v33 == 64 )
              {
                v44 = 64;
                v43 = v46;
                v45 = v48;
              }
              else
              {
                if ( v48 )
                {
                  sub_2206D90(&v49, &v46, v33);
                  v45 = 1;
                }
                else
                {
                  sub_2206DE0(&v49, &v46, v33);
                  v45 = 0;
                }
                v44 = v50;
                v43 = v49;
                if ( v47 > 0x40 && v46 )
                  operator delete[](v46);
              }
              v34 = sub_C0C5D0(v23, (__int64)&v43, v41, 0);
              LODWORD(v35) = (unsigned int)&v46;
              v17 = v34;
              if ( v44 > 0x40 )
              {
                if ( v43 )
                {
                  operator delete[](v43);
                  LODWORD(v35) = (unsigned int)&v46;
                }
              }
            }
            sub_15AD370((_DWORD)a2, 28, v13, (unsigned int)&v49, (_DWORD)v35, v11, v3);
            sub_15AF390(a2, v42, v17 & 0xFFFFFFFFFFFFFFFELL);
            result = HIDWORD(v58);
            *v51 = v52;
          }
          else
          {
            sub_15AEFC0(a2);
            v16 = !sub_10CCDE0(*(_WORD *)(a1 + 32));
            result = *(unsigned int *)(a1 + 20);
            if ( v16 )
            {
              return (unsigned int)(*(_DWORD *)(a1 + 16) + result);
            }
            else if ( !(_DWORD)result )
            {
              return *(unsigned int *)(a1 + 16);
            }
          }
          return result;
        }
      }
    }
    sub_15AEFC0(a2);
    if ( !sub_10CCDE0(*(_WORD *)(a1 + 32)) )
      return (unsigned int)(*(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20));
    result = *(unsigned int *)(a1 + 20);
    if ( !(_DWORD)result )
      return *(unsigned int *)(a1 + 16);
    return result;
  }
  v37 = *(_DWORD *)(a1 + 20);
  v38 = *(_DWORD *)(a1 + 16);
  v39 = *(_QWORD *)(a1 + 24);
  a2[53] = 0;
  if ( !v37 )
    v37 = v38;
  a2[54] = v37;
  v40 = *(_DWORD *)(a1 + 20);
  if ( !v40 )
    v40 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v40;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( v39 )
    sub_15AD370((_DWORD)a2, 55, v38, (unsigned int)&v49, (unsigned int)&v46, v39, v3);
  else
    sub_15AEFC0(a2);
  return v37;
}
