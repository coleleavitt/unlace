unsigned __int64 __fastcall sub_E3D330(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  char v12; // al
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  size_t v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // r12
  __int64 v30; // rsi
  _QWORD *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r12
  char *v35; // rdx
  _BYTE *v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  unsigned __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rax
  __int64 *v49[8]; // [rsp+8h] [rbp-40h] BYREF

  while ( 1 )
  {
    v4 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v4 - 59 <= 2 )
    {
      v5 = *(_QWORD *)(a2 + 128);
      if ( v5 )
      {
        if ( (*(_BYTE *)(v5 + 10) & 0x20) != 0 )
        {
          v6 = sub_B970F0(a2);
          if ( v6 && (*(_BYTE *)(v6 + 28) & 0x7F) == 0x2B )
          {
            v7 = *(_QWORD *)(v6 + 16);
            result = v7 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v7 & 4) == 0 )
              return result;
            return *(_QWORD *)result;
          }
          v4 = *(_BYTE *)(a2 + 28) & 0x7F;
        }
      }
    }
    if ( v4 == 8 )
    {
      v9 = *(_QWORD *)(a2 + 120);
      if ( v9 )
      {
        if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x2B )
        {
          v10 = *(_QWORD *)(v9 + 16);
          result = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v10 & 4) == 0 )
            return result;
          return *(_QWORD *)result;
        }
      }
    }
    if ( a2 == sub_AA81B0(*(_QWORD **)(a1 + 8)) )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_DWORD *)(*(_QWORD *)(v13 + 17448) + 248LL);
      if ( (unsigned int)(v14 - 35) <= 1 || (unsigned int)(v14 - 1) <= 4 )
      {
        v15 = *(_QWORD *)(a1 + 184);
        if ( v15 )
          return v15 + 48;
        v16 = *(_QWORD *)(v13 + 17504);
        v17 = j__strlen("std");
        v18 = sub_2244B30("std", v17);
        v21 = (unsigned int)sub_2244CB0(v16, "std", v17, v18);
        v22 = (__int64 *)(*(_QWORD *)v16 + 8 * v21);
        if ( *v22 )
        {
          if ( *v22 != -8 )
          {
            sub_989490(v49, v22, 0);
            v27 = v49[0];
            goto LABEL_28;
          }
          --*(_DWORD *)(v16 + 16);
        }
        v33 = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 104) += v17 + 17;
        v34 = (_QWORD *)((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        v35 = (char *)v34 + v17 + 17;
        if ( *(_QWORD *)(v16 + 32) >= (unsigned __int64)v35 && v33 )
          *(_QWORD *)(v16 + 24) = v35;
        else
          v34 = (_QWORD *)sub_986170(v16 + 24, v17 + 17, v17 + 17, 3, v19, v20);
        v36 = v34 + 2;
        if ( v17 )
          v36 = memcpy(v34 + 2, "std", v17);
        v36[v17] = 0;
        *v34 = v17;
        v34[1] = 0;
        *v22 = (__int64)v34;
        ++*(_DWORD *)(v16 + 12);
        v37 = sub_22450D0(v16, (unsigned int)v21);
        sub_989490(v49, (__int64 *)(*(_QWORD *)v16 + 8LL * v37), 0);
        v27 = v49[0];
LABEL_28:
        v28 = *v27;
        v29 = *(_QWORD **)(*v27 + 8);
        if ( !v29 )
        {
          v44 = *(_QWORD *)(v16 + 120);
          if ( !v44
            || (v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v44 + 16LL))(
                                  v44,
                                  "std",
                                  v17),
                (*(_QWORD *)(v28 + 8) = v29) == 0) )
          {
            v45 = *(_QWORD *)(v16 + 24);
            *(_QWORD *)(v16 + 104) += 24LL;
            v29 = (_QWORD *)((v45 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            v23 = (__int64)(v29 + 3);
            if ( *(_QWORD *)(v16 + 32) >= (unsigned __int64)(v29 + 3) && v45 )
              *(_QWORD *)(v16 + 24) = v23;
            else
              v29 = (_QWORD *)sub_986170(v16 + 24, 24, 24, 3, v25, v26);
            v46 = *v29 & 0xFFFFF80000000000LL;
            v29[1] = 0;
            *v29 = v46 | 0x1FFFC05;
            *(_QWORD *)(v28 + 8) = v29;
            v29[2] = v28;
          }
        }
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2264LL) + 80LL);
        v31 = sub_704780((__int64 *)(v30 + 72), v30, v23, v24, v25, v26);
        if ( v31 )
          v31 += 5;
        v32 = sub_BA4BE0(*(_QWORD *)(a1 + 8), (__int64)v31, 0, 0, 0, (__int64)v29, 0, 0);
        *(_QWORD *)(a1 + 184) = v32;
        *(_BYTE *)(v32 + 29) |= 2u;
        v15 = *(_QWORD *)(a1 + 184);
        if ( v15 )
          return v15 + 48;
        return 0;
      }
    }
    v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v11 = *(_QWORD *)v11;
    v12 = *(_BYTE *)(v11 + 8) & 0x7F;
    if ( ((v12 + 102) & 0x7Fu) > 1 && v12 != 7 )
      break;
    a2 = sub_B8C1B0(v11);
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 && (unsigned __int8)sub_B82160(a2) )
    goto LABEL_53;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 212LL) <= 0xBFu )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v42 = a2;
      goto LABEL_57;
    }
    goto LABEL_44;
  }
  v42 = sub_B8BF30(a2);
  if ( !v42 )
    goto LABEL_44;
LABEL_57:
  if ( (unsigned __int8)sub_B82220(v42) )
  {
LABEL_53:
    v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2264LL) + 80LL);
    v48 = sub_704780((__int64 *)(v47 + 72), v47, v38, v39, v40, v41);
    if ( v48 )
      return (unsigned __int64)(v48 + 5);
    return 0;
  }
  if ( !sub_B750C0(v42) || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
  {
LABEL_44:
    v43 = v11;
    return sub_B8EAA0(v43);
  }
  v43 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v43 = *(_QWORD *)(v43 + 8);
  return sub_B8EAA0(v43);
}
