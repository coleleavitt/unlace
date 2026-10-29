__int64 __fastcall sub_D789B0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r13
  _QWORD **v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 result; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rbx
  __int64 (*v35)(void); // rax
  _QWORD *v36; // rdi
  _QWORD **v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  __int64 (*v40)(void); // rax
  _QWORD **v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r13
  _QWORD **v44; // rdi
  __int64 (*v45)(void); // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  __int64 v54; // rax
  unsigned int v55; // r13d
  _QWORD **v56; // rdi
  __int64 v57; // r13
  __int64 (*v58)(void); // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  unsigned __int64 v62; // r15
  bool v63; // zf
  int v64; // r11d
  __int64 v65; // r10
  int v66; // ecx
  __int64 v67; // [rsp+0h] [rbp-88h]
  unsigned int v68; // [rsp+Ch] [rbp-7Ch]
  __int64 v69; // [rsp+10h] [rbp-78h]
  __int64 v72; // [rsp+38h] [rbp-50h]
  __int64 v73; // [rsp+40h] [rbp-48h] BYREF
  __int64 v74[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a3 + 32);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = *(_QWORD *)v7;
  if ( v6 )
  {
    v68 = 0;
    v10 = (__int64 *)(a3 + 48);
    v69 = 0;
    v67 = a3 + 16LL * (unsigned int)(v6 - 1) + 64;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v10;
        v12 = *v10 & 3;
        if ( (_DWORD)v12 != 1 )
          break;
        v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v32 + 16LL) != 48 )
          return 0;
        v43 = sub_F3D1D0(*v32, a2, a3, v7, a5);
        if ( *(char *)(v43 + 28) < 0 )
          return 0;
        v44 = *(_QWORD ***)(a1 + 24);
        v45 = (__int64 (*)(void))(*v44)[13];
        if ( (char *)v45 == (char *)sub_D66930 )
          v46 = (*(__int64 (__fastcall **)(_QWORD *))(*v44[3] + 104LL))(v44[3]);
        else
          v46 = v45();
        v47 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        v48 = v43;
        v53 = sub_EBA840(v46, v43);
        v54 = v47;
        if ( *(char *)(v47 + 29) < 0 )
          v54 = sub_B4E9E0(v47);
        v55 = *(_DWORD *)(v54 + 68);
        if ( (v55 & 0xFFFFFFF0) == 0 )
        {
          v72 = v54;
          sub_B5AD70(v54, v48, v49, v50, v51, v52);
          v55 = *(_DWORD *)(v72 + 68);
        }
        v56 = *(_QWORD ***)(a1 + 24);
        v57 = (v55 >> 4) - 1;
        v58 = (__int64 (*)(void))(*v56)[13];
        if ( (char *)v58 == (char *)sub_D66930 )
          v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v56[3] + 104LL))(v56[3]);
        else
          v59 = v58();
        a2 = *(_QWORD *)(*(_QWORD *)(v53 + 48) + 8 * v57);
        v60 = sub_A742B0(v59, a2);
        v8 = *(_QWORD *)(v47 + 48);
        v69 += v60;
        v61 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v61 + 16) - 43 <= 1 )
        {
LABEL_44:
          while ( 1 )
          {
            v8 = *(_QWORD *)(v61 + 32);
            if ( (*(_BYTE *)(v61 + 18) & 0x10) == 0 )
              break;
            v62 = v8 & 0xFFFFFFFFFFFFFFF0LL;
            v61 = *(_QWORD *)v62;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v62 + 16LL) - 43 > 1 )
              v61 = sub_F3F310(v61, a2, a3, v7);
          }
          goto LABEL_19;
        }
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
        {
LABEL_19:
          v10 += 2;
          if ( (__int64 *)v67 == v10 )
            goto LABEL_20;
        }
        else
        {
          v61 = sub_F3F310(v61, a2, a3, v7);
          if ( v61 )
            goto LABEL_44;
          v10 += 2;
          if ( (__int64 *)v67 == v10 )
            goto LABEL_20;
        }
      }
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 != 3 )
          goto LABEL_19;
        v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v13 + 12) & 1) != 0 )
          return 0;
        v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v14 + 16LL) != 48 )
          return 0;
        v15 = sub_F3D1D0(*v14, a2, a3, v7, a5);
        if ( *(char *)(v15 + 28) < 0 )
          return 0;
        v16 = *(_QWORD ***)(a1 + 24);
        v17 = (__int64 (__fastcall *)(__int64))(*v16)[13];
        v18 = v17 == sub_D66930
            ? (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3])
            : ((__int64 (*)(void))v17)();
        v19 = v15;
        v23 = sub_EBA840(v18, v15);
        v24 = **(_QWORD **)(v13 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        v8 = (*(_BYTE *)(*(_QWORD *)v24 + 8LL) & 0xF) != 0
           ? sub_F411C0(**(_QWORD **)(v13 + 16)) & 0xFFFFFFFFFFFFFFF0LL
           : *(_QWORD *)v24 & 0xFFFFFFFFFFFFFFF0LL;
        v25 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v25 + 16LL) != 48 )
          return 0;
        v26 = sub_F3D1D0(*v25, v19, v20, v21, v22);
        v73 = v26;
        v28 = *(_QWORD *)(v26 + 128);
        if ( v28
          || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v26 + 104) + 96LL), *(_QWORD *)(v26 + 104), a3, v7, a5, v27),
              (v28 = *(_QWORD *)(v26 + 128)) != 0) )
        {
          v28 = *(_QWORD *)(v28 + 88);
        }
        v29 = *(_QWORD *)(v23 + 72);
        v73 = v28;
        a2 = *(unsigned int *)(v29 + 80);
        if ( (_DWORD)a2 )
        {
          v27 = (unsigned int)(a2 - 1);
          a5 = *(_QWORD *)(v29 + 64);
          v7 = (unsigned int)v27 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          a3 = a5 + 16 * v7;
          v30 = *(_QWORD *)a3;
          if ( *(_QWORD *)a3 == v28 )
            goto LABEL_18;
          v64 = 1;
          v65 = 0;
          if ( v30 != -4096 )
          {
            while ( 1 )
            {
              if ( !v65 && v30 == -8192 )
                v65 = a3;
              v7 = (unsigned int)v27 & (v64 + (_DWORD)v7);
              a3 = a5 + 16LL * (unsigned int)v7;
              v30 = *(_QWORD *)a3;
              if ( v28 == *(_QWORD *)a3 )
                break;
              if ( v30 == -4096 )
              {
                if ( v65 )
                  a3 = v65;
                goto LABEL_68;
              }
              ++v64;
            }
LABEL_18:
            a2 = *(_QWORD *)(a3 + 8);
            v69 += a2;
            goto LABEL_19;
          }
LABEL_68:
          v66 = *(_DWORD *)(v29 + 72);
          v74[0] = a3;
          v7 = (unsigned int)(v66 + 1);
          a5 = (unsigned int)(4 * v7);
          if ( (unsigned int)a5 < 3 * (int)a2 )
          {
            a5 = (unsigned int)a2 >> 3;
            if ( (int)a2 - *(_DWORD *)(v29 + 76) - (int)v7 > (unsigned int)a5 )
              goto LABEL_60;
            goto LABEL_59;
          }
        }
        else
        {
          v74[0] = 0;
        }
        LODWORD(a2) = 2 * a2;
LABEL_59:
        sub_6E50A0(v29 + 64, a2, a3, v7, a5, v27);
        sub_A49FE0((__int64 *)(v29 + 64), &v73, v74);
        a2 = *(unsigned int *)(v29 + 72);
        v28 = v73;
        a3 = v74[0];
        v7 = (unsigned int)(a2 + 1);
LABEL_60:
        v63 = *(_QWORD *)a3 == -4096;
        *(_DWORD *)(v29 + 72) = v7;
        if ( !v63 )
          --*(_DWORD *)(v29 + 76);
        *(_QWORD *)a3 = v28;
        v10 += 2;
        *(_QWORD *)(a3 + 8) = 0;
        if ( (__int64 *)v67 == v10 )
          goto LABEL_20;
      }
      else
      {
        v33 = *(_QWORD **)(a1 + 24);
        v34 = *(_QWORD *)(a4 + 8LL * v68);
        v35 = *(__int64 (**)(void))(*v33 + 104LL);
        if ( (char *)v35 == (char *)sub_D66930
          && (v36 = (_QWORD *)v33[3], v35 = *(__int64 (**)(void))(*v36 + 104LL), (char *)v35 == (char *)sub_D66930)
          && (v37 = (_QWORD **)v36[3], v35 = (__int64 (*)(void))(*v37)[13], (char *)v35 == (char *)sub_D66930) )
        {
          v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v37[3] + 104LL))(v37[3]);
        }
        else
        {
          v38 = (_QWORD *)v35();
        }
        result = sub_A4E300(v38, v8);
        if ( !result )
          return result;
        v39 = *(_QWORD **)(a1 + 24);
        v8 = *(_QWORD *)(result + 32);
        v40 = *(__int64 (**)(void))(*v39 + 104LL);
        if ( (char *)v40 == (char *)sub_D66930
          && (v41 = (_QWORD **)v39[3], v40 = (__int64 (*)(void))(*v41)[13], (char *)v40 == (char *)sub_D66930) )
        {
          v42 = (*(__int64 (__fastcall **)(_QWORD *))(*v41[3] + 104LL))(v41[3]);
        }
        else
        {
          v42 = v40();
        }
        a2 = v8;
        v10 += 2;
        ++v68;
        v69 += sub_A8AC40(v42, v8) * v34;
        if ( (__int64 *)v67 == v10 )
          goto LABEL_20;
      }
    }
  }
  v69 = 0;
LABEL_20:
  *a6 = v69;
  return 1;
}

