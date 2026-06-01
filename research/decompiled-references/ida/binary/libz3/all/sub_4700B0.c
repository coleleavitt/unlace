__int64 __fastcall sub_4700B0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // r13
  std::chrono::_V2::steady_clock *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  std::ios_base *v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 **v19; // r12
  unsigned __int64 v20; // r13
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned int i; // r13d
  __int64 v26; // r12
  __int64 **v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 **v31; // rsi
  __int64 **v32; // r13
  __int64 **v33; // r14
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 **v36; // rbx
  std::chrono::_V2::steady_clock *v37; // rdi
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  void *v42; // rdi
  void *v43; // r12
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // r12
  int v47; // edx
  void *v48; // r12
  __int64 v49; // rdx
  char v50; // cl
  __int64 v51; // rdx
  std::chrono::_V2::steady_clock *v52; // rbp
  unsigned __int64 v53; // rbp
  __int64 *v54; // rsi
  _QWORD *v55; // rax
  std::chrono::_V2::steady_clock *v56; // rbp
  unsigned __int64 v57; // rbp
  __int64 *v58; // rsi
  int v59[2]; // [rsp+0h] [rbp-128h]
  void *v62; // [rsp+18h] [rbp-110h]
  int v63; // [rsp+38h] [rbp-F0h]
  unsigned int v64; // [rsp+3Ch] [rbp-ECh]
  _QWORD *v65; // [rsp+40h] [rbp-E8h]
  unsigned int v66; // [rsp+5Ch] [rbp-CCh] BYREF
  std::chrono::_V2::steady_clock *v67; // [rsp+60h] [rbp-C8h] BYREF
  __int64 **v68; // [rsp+68h] [rbp-C0h]
  __int64 v69; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+78h] [rbp-B0h]
  __int64 v71; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+88h] [rbp-A0h]
  int v73; // [rsp+90h] [rbp-98h] BYREF
  char v74; // [rsp+94h] [rbp-94h]
  __int64 v75; // [rsp+98h] [rbp-90h]
  int v76; // [rsp+A0h] [rbp-88h] BYREF
  char v77; // [rsp+A4h] [rbp-84h]
  __int64 v78; // [rsp+A8h] [rbp-80h]
  _QWORD v79[2]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v80[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v81[2]; // [rsp+D0h] [rbp-58h] BYREF
  _QWORD v82[9]; // [rsp+E0h] [rbp-48h] BYREF

  v8 = (std::chrono::_V2::steady_clock *)*a2;
  result = *(_QWORD *)(sub_4095A0(*a2, (__int64)a2, a3, a4, a5, a6) + 8);
  if ( result && *(_DWORD *)(result - 4) )
  {
    ++*(_DWORD *)(a1 + 24);
    if ( !*(_BYTE *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 32) = std::chrono::_V2::steady_clock::now(v8);
      *(_BYTE *)(a1 + 48) = 1;
    }
    v65 = *(_QWORD **)(*(_QWORD *)(*a2 + 80) + 16LL);
    v10 = v65[1];
    v68 = nullptr;
    *(_QWORD *)v59 = v10;
    v67 = (std::chrono::_V2::steady_clock *)v10;
    v11 = sub_B00C00(v10, &qword_1C7F4C8, &qword_18D6CD0);
    v12 = (std::ios_base *)v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 48);
    sub_E5EBF0(v11, *(_QWORD *)(*(_QWORD *)(*a2 + 80) + 24LL));
    v13 = *a2;
    v69 = 100;
    v70 = 0;
    LODWORD(v13) = *(unsigned __int16 *)(v13 + 106);
    v71 = 1;
    v72 = 0;
    v64 = v13;
    v14 = &v71;
    sub_182CBA0(qword_1C7F2C0, &v71);
    BYTE4(v71) &= ~1u;
    LODWORD(v71) = 1;
    if ( *(_DWORD *)(a1 + 16) )
    {
      v63 = 0;
      while ( 1 )
      {
        v19 = v68;
        if ( v68 )
        {
          v20 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
          if ( (unsigned __int64)v68 >= v20 )
            goto LABEL_17;
          do
          {
            while ( 1 )
            {
              v14 = *v19;
              if ( *v19 )
              {
                v21 = (*((_DWORD *)v14 + 2))-- == 1;
                if ( v21 )
                  break;
              }
              if ( (unsigned __int64)++v19 >= v20 )
                goto LABEL_16;
            }
            sub_15D7BC0(v67, v14);
            ++v19;
          }
          while ( (unsigned __int64)v19 < v20 );
LABEL_16:
          v19 = v68;
          if ( v68 )
LABEL_17:
            *((_DWORD *)v19 - 1) = 0;
        }
        v22 = sub_4095A0(*a2, (__int64)v14, v15, v16, v17, v18);
        v23 = *(_QWORD *)(v22 + 8);
        v24 = v22;
        for ( i = 0; v23; *((_DWORD *)v27 - 1) = v30 )
        {
          if ( i >= *(_DWORD *)(v23 - 4) )
            break;
          v26 = *(_QWORD *)(v23 + 8LL * i);
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v27 = v68;
          if ( v68 )
          {
            v28 = *((_DWORD *)v68 - 1);
            if ( v28 == *((_DWORD *)v68 - 2) )
            {
              v38 = (3 * v28 + 1) >> 1;
              v39 = 8 * v38 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v39 || v28 >= v38 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v81, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v81);
                sub_233E40((__int64)v81);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v40 = (unsigned int *)sub_186B300(v68 - 1, v39);
              v41 = v40[1];
              v27 = (__int64 **)(v40 + 2);
              *v40 = v38;
              v68 = v27;
              LODWORD(v40) = v41;
              v31 = &v27[v41];
              v23 = *(_QWORD *)(v24 + 8);
              v30 = (_DWORD)v40 + 1;
            }
            else
            {
              v29 = v28;
              v30 = v28 + 1;
              v31 = &v68[v29];
            }
          }
          else
          {
            v55 = (_QWORD *)sub_186B270(0x18u);
            v27 = (__int64 **)(v55 + 1);
            v68 = (__int64 **)(v55 + 1);
            v31 = (__int64 **)(v55 + 1);
            *v55 = 2;
            v23 = *(_QWORD *)(v24 + 8);
            v30 = 1;
          }
          *v31 = (__int64 *)v26;
          ++i;
        }
        if ( !(unsigned __int8)sub_46E1F0(a1, (__int64 *)&v67, (__int64)&v69) )
          break;
        v32 = v68;
        if ( v68 && (v33 = &v68[*((unsigned int *)v68 - 1)], v33 != v68) )
        {
          while ( 1 )
          {
            (*(void (__fastcall **)(std::ios_base *))(*(_QWORD *)v12 + 192LL))(v12);
            v34 = sub_15E1A70(v59[0]);
            v35 = v34;
            if ( v34 )
              ++*(_DWORD *)(v34 + 8);
            sub_E5EBF0(v12, v34);
            if ( (unsigned int)sub_E60CB0(v12, 0, 0) != -1 )
              break;
            if ( v35 )
            {
              v21 = (*(_DWORD *)(v35 + 8))-- == 1;
              if ( v21 )
                sub_15D7BC0(*(_QWORD *)v59, v35);
            }
            ++v32;
            (*(void (__fastcall **)(std::ios_base *, __int64))(*(_QWORD *)v12 + 200LL))(v12, 1);
            if ( v33 == v32 )
              goto LABEL_44;
          }
          if ( v35 )
          {
            v21 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v21 )
              sub_15D7BC0(*(_QWORD *)v59, v35);
          }
          (*(void (__fastcall **)(std::ios_base *, __int64))(*(_QWORD *)v12 + 200LL))(v12, 1);
        }
        else
        {
LABEL_44:
          if ( (unsigned __int8)sub_40A830(v65, *(_DWORD *)(*a2 + 96), (__int64)&v67, &v66, v64) )
          {
            sub_40ABA0(*a2, *a2 + 80, (__int64)&v67);
            sub_3FE9B0(*a2, v66);
            break;
          }
        }
        v42 = qword_1C7F2C0;
        v79[0] = 10;
        v79[1] = 0;
        ++*(_DWORD *)(a1 + 28);
        v80[0] = 1;
        v80[1] = 0;
        sub_182CBA0(v42, v80);
        BYTE4(v80[0]) &= ~1u;
        v43 = qword_1C7F2C0;
        LODWORD(v80[0]) = 1;
        v81[0] = 0;
        v81[1] = 0;
        v82[0] = 1;
        v82[1] = 0;
        if ( (v69 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, v81, &v69);
        else
          LODWORD(v81[0]) = v69;
        if ( (v71 & 0x100000000LL) != 0 )
        {
          sub_182C690(v43, v82, &v71);
        }
        else
        {
          BYTE4(v82[0]) &= ~1u;
          LODWORD(v82[0]) = v71;
        }
        v44 = qword_1C7F2C0;
        if ( (v82[0] & 0x100000000LL) != 0
          || LODWORD(v82[0]) != 1
          || (v80[0] & 0x100000000LL) != 0
          || LODWORD(v80[0]) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v81, v79);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, v81, v79);
          sub_182CBA0(v44, v82);
          BYTE4(v82[0]) &= ~1u;
          LODWORD(v82[0]) = 1;
        }
        v74 &= 0xFCu;
        v45 = qword_1C7F2C0;
        v77 &= 0xFCu;
        v73 = 0;
        v75 = 0;
        v76 = 1;
        v78 = 0;
        if ( (v81[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v73, v81);
        else
          v73 = v81[0];
        if ( (v82[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v45, &v76, v82);
        }
        else
        {
          v77 &= ~1u;
          v76 = v82[0];
        }
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v81);
        sub_182CBA0(v62, v82);
        v46 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v79);
        sub_182CBA0(v46, v80);
        v47 = v73;
        v48 = qword_1C7F2C0;
        v73 = v69;
        LODWORD(v69) = v47;
        v49 = v75;
        v75 = v70;
        v70 = v49;
        v50 = v74 & 1;
        LOBYTE(v49) = BYTE4(v69) & 0xFC | v74 & 2;
        v74 = BYTE4(v69) & 1 | v74 & 0xFC | BYTE4(v69) & 2;
        BYTE4(v69) = v50 | v49;
        LODWORD(v49) = v76;
        v76 = v71;
        LODWORD(v71) = v49;
        v51 = v78;
        v78 = v72;
        v72 = v51;
        LOBYTE(v51) = v77 & 1 | BYTE4(v71) & 0xFC | v77 & 2;
        v77 = BYTE4(v71) & 1 | v77 & 0xFC | BYTE4(v71) & 2;
        BYTE4(v71) = v51;
        sub_182CBA0(qword_1C7F2C0, &v73);
        v14 = (__int64 *)&v76;
        sub_182CBA0(v48, &v76);
        v16 = a1;
        if ( (unsigned int)++v63 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_57;
      }
      v56 = (std::chrono::_V2::steady_clock *)qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v69);
      v37 = v56;
      sub_182CBA0(v56, &v71);
      v21 = (*((_DWORD *)v12 + 12))-- == 1;
      if ( v21 )
      {
        (**(void (__fastcall ***)(std::ios_base *))v12)(v12);
        v37 = v12;
        sub_186B220(v12);
      }
      v36 = v68;
      if ( !v68 )
        goto LABEL_39;
      v57 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
      if ( (unsigned __int64)v68 < v57 )
      {
        do
        {
          v58 = *v36;
          if ( *v36 )
          {
            v21 = (*((_DWORD *)v58 + 2))-- == 1;
            v37 = v67;
            if ( v21 )
              sub_15D7BC0(v67, v58);
          }
          ++v36;
        }
        while ( (unsigned __int64)v36 < v57 );
        v36 = v68;
        if ( !v68 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_57:
      v52 = (std::chrono::_V2::steady_clock *)qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v69);
      v37 = v52;
      sub_182CBA0(v52, &v71);
      v21 = (*((_DWORD *)v12 + 12))-- == 1;
      if ( v21 )
      {
        (**(void (__fastcall ***)(std::ios_base *))v12)(v12);
        v37 = v12;
        sub_186B220(v12);
      }
      v36 = v68;
      if ( !v68 )
        goto LABEL_39;
      v53 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
      if ( (unsigned __int64)v68 < v53 )
      {
        do
        {
          while ( 1 )
          {
            v54 = *v36;
            if ( *v36 )
            {
              v21 = (*((_DWORD *)v54 + 2))-- == 1;
              v37 = v67;
              if ( v21 )
                break;
            }
            if ( (unsigned __int64)++v36 >= v53 )
              goto LABEL_66;
          }
          sub_15D7BC0(v67, v54);
          ++v36;
        }
        while ( (unsigned __int64)v36 < v53 );
LABEL_66:
        v36 = v68;
        if ( !v68 )
          goto LABEL_39;
      }
    }
    v37 = (std::chrono::_V2::steady_clock *)(v36 - 1);
    sub_186B220(v36 - 1);
LABEL_39:
    result = a1;
    if ( *(_BYTE *)(a1 + 48) )
    {
      result = std::chrono::_V2::steady_clock::now(v37) - *(_QWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 40) += result;
    }
  }
  return result;
}

