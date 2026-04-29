__int64 __fastcall sub_29430(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, _QWORD),
        __int64 a4,
        int a5,
        int a6)
{
  unsigned __int8 *v6; // rcx
  __int64 v7; // rax
  bool v9; // zf
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  int v12; // r12d
  int v13; // edx
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r14d
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rbx
  __int64 *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 *v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int8 *v35; // [rsp+0h] [rbp-A8h]
  __int64 v36; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v37; // [rsp+17h] [rbp-91h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  int v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-60h] BYREF
  __int64 v44; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v46[9]; // [rsp+60h] [rbp-48h] BYREF

  v6 = (unsigned __int8 *)*a2;
  v7 = a2[1];
  LODWORD(a2) = 8;
  v46[1] = __readfsqword(0x28u);
  v9 = *(_BYTE *)(a1 + 161) == 0;
  v41 = v6;
  v35 = &v6[v7];
  if ( v9 )
    LODWORD(a2) = 4;
  v44 = -1;
  v45 = -1;
  if ( v6 >= v35 )
    return 1;
  v37 = 1;
  v10 = 0;
  v11 = a1;
  v40 = (int)a2;
  v39 = (int)a2;
  while ( 1 )
  {
    v12 = *v6++;
    v41 = v6;
    v13 = v12;
    v14 = v12 & 0xF;
    LODWORD(v15) = v13 & 0xFFFFFFF0;
    if ( (_BYTE)v15 == 64 )
    {
      v10 += (unsigned __int8)(v39 * v14) & 0xFC;
      goto LABEL_11;
    }
    if ( (unsigned __int8)v15 > 0x40u )
      break;
    if ( (_BYTE)v15 == 32 )
    {
      if ( !(unsigned __int8)unpack_xleb128(&v42, 64, 0, &v41, v35) )
        goto LABEL_73;
      a2 = &v44;
      v44 = -1;
      v10 = v42;
      v45 = -1;
      sub_293D0(v11, &v44, &v45, v14);
      v6 = v41;
    }
    else if ( (unsigned __int8)v15 > 0x20u )
    {
      if ( (_BYTE)v15 != 48 )
        goto LABEL_69;
      LODWORD(a2) = 64;
      if ( !(unsigned __int8)unpack_xleb128(v46, 64, 0, &v41, v35) )
      {
LABEL_73:
        if ( (debug & 0x10) != 0 )
          sub_191F0(
            (unsigned int)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
            *v41,
            v41[1],
            v41[2],
            v41[3],
            v41[4]);
        return 0;
      }
      v6 = v41;
      v10 += v46[0];
    }
    else
    {
      if ( !(_BYTE)v15 )
        return 1;
      v37 = v14;
    }
LABEL_11:
    if ( v6 >= v35 )
      return 1;
  }
  if ( (_BYTE)v15 == 112 )
  {
    if ( !(unsigned __int8)unpack_xleb128(&v42, 64, 0, &v41, v35) )
      goto LABEL_73;
    LODWORD(a2) = v10 + v44;
    (**a3)(a3, (__int64 *)(v10 + v44), v37);
    v6 = v41;
    v10 += v42 + v39;
    goto LABEL_11;
  }
  if ( (unsigned __int8)v15 > 0x70u )
  {
    if ( (_BYTE)v15 != 0x80 )
    {
LABEL_69:
      if ( (debug & 0x10) != 0 )
        sub_191F0((unsigned int)"bad opcode %02X in rebase info!\n", (unsigned __int8)v15, v15, (_DWORD)v6, a5, a6);
      return 0;
    }
    if ( !(unsigned __int8)unpack_xleb128(&v42, 64, 0, &v41, v35) )
      goto LABEL_73;
    LODWORD(a2) = 64;
    if ( !(unsigned __int8)unpack_xleb128(&v43, 64, 0, &v41, v35) )
      goto LABEL_73;
    LODWORD(v15) = v42;
    if ( v45 < v42 || v45 < v43 )
      goto LABEL_73;
    v28 = v44;
    if ( v44 == -1 )
      goto LABEL_28;
    v29 = 0;
    if ( v42 )
    {
      while ( 1 )
      {
        a2 = (__int64 *)(v28 + v10);
        if ( !*(_BYTE *)(v11 + 440) )
        {
          sub_28840(v11);
          a2 = (__int64 *)(v28 + v10);
        }
        v30 = *(_QWORD *)(v11 + 224);
        v15 = 9LL * *(_QWORD *)(v11 + 232);
        v6 = (unsigned __int8 *)(v30 + 72LL * *(_QWORD *)(v11 + 232));
        if ( (unsigned __int8 *)v30 == v6 )
          goto LABEL_28;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v30 + 24);
          if ( (unsigned __int64)a2 >= v27 )
          {
            v27 += *(_QWORD *)(v30 + 32);
            if ( (unsigned __int64)a2 < v27 )
              break;
          }
          v30 += 72;
          if ( v6 == (unsigned __int8 *)v30 )
          {
LABEL_40:
            sub_112F0(
              (unsigned int)"Wrong rebase info, file possibly corrupted!\n",
              (_DWORD)a2,
              v27,
              (_DWORD)v6,
              a5,
              a6);
            return 0;
          }
        }
        ++v29;
        (**a3)(a3, a2, v37);
        v10 += v40 + v43;
        if ( v29 >= v42 )
          goto LABEL_63;
      }
    }
    goto LABEL_63;
  }
  if ( (_BYTE)v15 != 80 )
  {
    if ( (_BYTE)v15 != 96 )
      goto LABEL_69;
    LODWORD(a2) = 64;
    if ( !(unsigned __int8)unpack_xleb128(&v42, 64, 0, &v41, v35) || v45 < v42 )
      goto LABEL_73;
    LODWORD(v15) = v44;
    if ( v44 == -1 )
      goto LABEL_28;
    LODWORD(a2) = v37;
    v17 = 0;
    if ( v42 )
    {
      v36 = v44;
      v18 = v11;
      v19 = v44 + v10;
      v20 = v18;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v20 + 440) )
          sub_28840(v20);
        v21 = *(_QWORD *)(v20 + 224);
        v15 = 9LL * *(_QWORD *)(v20 + 232);
        v6 = (unsigned __int8 *)(v21 + 72LL * *(_QWORD *)(v20 + 232));
        if ( (unsigned __int8 *)v21 == v6 )
          break;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v21 + 24);
          if ( v19 >= v15 )
          {
            v15 += *(_QWORD *)(v21 + 32);
            if ( v19 < v15 )
              break;
          }
          v21 += 72;
          if ( v6 == (unsigned __int8 *)v21 )
            goto LABEL_28;
        }
        LODWORD(a2) = v19;
        ++v17;
        (**a3)(a3, (__int64 *)v19, v37);
        if ( v17 >= v42 )
        {
          v33 = v20;
          v34 = v19;
          v11 = v33;
          v10 = v39 - v36 + v34;
          v6 = v41;
          goto LABEL_11;
        }
        v19 += v39;
      }
LABEL_28:
      sub_112F0((unsigned int)"Wrong rebase info, file possibly corrupted!\n", (_DWORD)a2, v15, (_DWORD)v6, a5, a6, v35);
      return 0;
    }
LABEL_63:
    v6 = v41;
    goto LABEL_11;
  }
  if ( v45 >= v14 )
  {
    if ( v44 == -1 )
      goto LABEL_28;
    v22 = 0;
    LODWORD(a2) = v37;
    if ( v14 )
    {
      v38 = v44;
      v23 = v11;
      v24 = (__int64 *)(v44 + v10);
      v25 = v23;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v25 + 440) )
          sub_28840(v25);
        v26 = *(__int64 **)(v25 + 224);
        v15 = 9LL * *(_QWORD *)(v25 + 232);
        a2 = &v26[9 * *(_QWORD *)(v25 + 232)];
        if ( v26 == a2 )
          goto LABEL_28;
        while ( 1 )
        {
          v27 = v26[3];
          if ( (unsigned __int64)v24 >= v27 )
          {
            v27 += v26[4];
            if ( (unsigned __int64)v24 < v27 )
              break;
          }
          v26 += 9;
          if ( a2 == v26 )
            goto LABEL_40;
        }
        ++v22;
        LODWORD(a2) = (_DWORD)v24;
        (**a3)(a3, v24, v37);
        if ( v14 == v22 )
        {
          v31 = v25;
          v32 = v24;
          v6 = v41;
          v11 = v31;
          v10 = (unsigned __int64)v32 + v39 - v38;
          goto LABEL_11;
        }
        v24 = (__int64 *)((char *)v24 + v39);
      }
    }
    goto LABEL_11;
  }
  if ( (debug & 0x10) != 0 )
    sub_191F0((unsigned int)"bad immediate value %02X in rebase info!\n", v14, v15, (_DWORD)v6, a5, a6);
  return 0;
}
