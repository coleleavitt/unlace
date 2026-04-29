unsigned __int64 __fastcall sub_11F9E0(__int128 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // r10
  __int64 (*v13)(); // rax
  char v14; // al
  int v16; // esi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rbp
  char v22; // al
  __int64 v23; // r10
  __int64 v24; // rbx
  __int64 v25; // rbp
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rsi
  int v29; // edi
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  unsigned int v40; // [rsp+0h] [rbp-98h]
  unsigned __int64 v41; // [rsp+0h] [rbp-98h]
  unsigned __int64 v42; // [rsp+0h] [rbp-98h]
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  int v47; // [rsp+1Ch] [rbp-7Ch] BYREF
  _QWORD v48[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+30h] [rbp-68h] BYREF
  __int128 v50; // [rsp+38h] [rbp-60h] BYREF
  __int128 v51; // [rsp+48h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  while ( 2 )
  {
    v4 = *((__int64 **)&a1 + 1);
    v5 = a1;
    v6 = a2;
    v40 = a3;
    v52 = __readfsqword(0x28u);
    v7 = a4;
    v8 = HIWORD(a4);
LABEL_2:
    v9 = *(unsigned __int16 *)(v6 + 4);
    v10 = v7 + v8;
    LOWORD(v11) = 8 * v9;
    if ( (unsigned __int16)v10 > (unsigned __int16)(8 * v9) )
      v10 = 8 * v9;
    if ( (unsigned __int16)v10 < (unsigned __int16)v7 )
    {
      v8 = 0;
      v7 = 0;
    }
    else
    {
LABEL_5:
      v8 = v10 - v7;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v13 = *(__int64 (**)())(*(_QWORD *)v12 + 56LL);
    if ( v13 != sub_116F40 )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD))v13)(
              v12,
              *((_QWORD *)&a1 + 1),
              a1,
              v6,
              v40,
              (v8 << 16) | (unsigned __int16)v7);
      v12 = v44;
      if ( v14 )
        return v52 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)v6 )
    {
      case 1:
        if ( (_WORD)v8 == (_WORD)v11 && !(_WORD)v7 )
        {
          v33 = *(_DWORD *)(v6 + 4);
          v34 = *(_DWORD *)(v6 + 8);
          v49 = nullptr;
          *(_QWORD *)&v50 = 0;
          sub_5FB00((__int64 *)&v49, v34, v33);
          *((_QWORD *)&v50 + 1) = 0;
          v51 = 0;
          sub_5FF00(v4, (__int64 *)&v49);
          sub_311BB0(v4 + 2, (char *)&v50 + 8);
          if ( *((_QWORD *)&v50 + 1) )
          {
            *(_QWORD *)&v51 = 0;
            qfree(*((_QWORD *)&v50 + 1));
          }
LABEL_20:
          qfree(v49);
        }
        else if ( (unsigned __int8)sub_117740(&v47, v48, *(_QWORD *)(a1 + 480), v6, (v8 << 16) | (unsigned __int16)v7) )
        {
          v16 = *(_DWORD *)(v6 + 8) + v47;
          v49 = nullptr;
          *(_QWORD *)&v50 = 0;
          sub_5FB00((__int64 *)&v49, v16, v48[0]);
          *((_QWORD *)&v50 + 1) = 0;
          v51 = 0;
          sub_5FF00(v4, (__int64 *)&v49);
          sub_311BB0(v4 + 2, (char *)&v50 + 8);
          if ( *((_QWORD *)&v50 + 1) )
          {
            *(_QWORD *)&v51 = 0;
            qfree(*((_QWORD *)&v50 + 1));
          }
          qfree(v49);
        }
        return v52 - __readfsqword(0x28u);
      case 4:
        sub_1201C0(&v49, a1, *(_QWORD *)(v6 + 8), v40);
        sub_5FF00(*((__int64 **)&a1 + 1), (__int64 *)&v49);
        sub_311BB0(*((_QWORD *)&a1 + 1) + 16LL, (char *)&v50 + 8);
        if ( *((_QWORD *)&v50 + 1) )
        {
          *(_QWORD *)&v51 = 0;
          qfree(*((_QWORD *)&v50 + 1));
        }
        goto LABEL_20;
      case 5:
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(**(_QWORD **)(v6 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL));
        goto LABEL_22;
      case 6:
        if ( *(_DWORD *)(v6 + 4) == -1 )
          return v52 - __readfsqword(0x28u);
        v42 = *(_QWORD *)(v6 + 8);
        v20 = sub_33E1E0(*(_QWORD *)(a1 + 480), v42);
        v17 = v42;
        if ( v20 )
          return v52 - __readfsqword(0x28u);
LABEL_22:
        if ( (_WORD)v8 == (_WORD)v11 && !(_WORD)v7 )
        {
          v18 = *(int *)(v6 + 4);
          v19 = v17;
        }
        else
        {
          v41 = v17;
          if ( !(unsigned __int8)sub_117740(
                                   (int *)v48,
                                   &v49,
                                   *(_QWORD *)(a1 + 480),
                                   v6,
                                   (v8 << 16) | (unsigned __int16)v7) )
            return v52 - __readfsqword(0x28u);
          v18 = (int)v49;
          v19 = v41 + SLODWORD(v48[0]);
        }
        return sub_11E660(v4, v19, v18);
      case 8:
        v21 = *(_QWORD *)(v6 + 8);
        v45 = v12;
        v22 = sub_32A780(v21, *((_QWORD *)&a1 + 1), a1, v40);
        v23 = v45;
        if ( v22 )
        {
          if ( !*(_DWORD *)(v21 + 20) )
          {
            if ( (v40 & 1) == 0 )
              return v52 - __readfsqword(0x28u);
            goto LABEL_48;
          }
        }
        else
        {
          if ( (v40 & 1) == 0 )
          {
            if ( !*(_DWORD *)(v21 + 20) )
              return v52 - __readfsqword(0x28u);
            goto LABEL_33;
          }
          v49 = nullptr;
          v50 = 0;
          v36 = *(_QWORD *)(v21 + 224);
          if ( v36 )
          {
            *((_QWORD *)&v50 + 1) = *(_QWORD *)(v21 + 224);
            v49 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v36);
            memcpy(v49, *(const void **)(v21 + 216), 16 * v36);
            *(_QWORD *)&v50 = v36;
            v23 = v45;
          }
          v37 = *(int *)(v21 + 12);
          v46 = v23;
          v38 = *(_DWORD *)(v21 + 16) - v37;
          v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 16LL)
              & (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1440LL) + v37);
          v48[1] = v38;
          v48[0] = v39;
          sub_312AD0(&v49, v48);
          sub_311BB0(*((_QWORD *)&a1 + 1) + 16LL, &v49);
          v23 = v46;
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(v49);
            v23 = v46;
          }
          if ( !*(_DWORD *)(v21 + 20) )
          {
LABEL_48:
            v43 = v23;
            sub_5FF00(*((__int64 **)&a1 + 1), (__int64 *)(v23 + 144));
            return sub_311BB0(*((_QWORD *)&a1 + 1) + 16LL, v43 + 160);
          }
        }
LABEL_33:
        v24 = *(_QWORD *)(v21 + 24);
        v25 = v24 + 80LL * *(_QWORD *)(v21 + 32);
        while ( v24 != v25 )
        {
          v26 = *(_DWORD *)(v24 + 4);
          v27 = v24;
          v24 += 80;
          sub_11F9E0(a1, *((_QWORD *)&a1 + 1), v27, v40, (unsigned int)(v26 << 19));
        }
        return v52 - __readfsqword(0x28u);
      case 9:
        *(_QWORD *)&a1 = **(_QWORD **)(v6 + 8);
        if ( (*(_DWORD *)a1 & 4) != 0 || (*(_DWORD *)a1 & 0xC0000) == (_DWORD)&loc_40000 )
          return v52 - __readfsqword(0x28u);
        return sub_1177E0((_QWORD *)a1, SDWORD2(a1), v6, (v8 << 16) | (unsigned __int16)v7);
      case 0xA:
        v28 = *(_QWORD *)(v6 + 8);
        v29 = *(_DWORD *)(v28 + 16);
        if ( v29 <= 0 )
        {
          if ( !v29 || *(_BYTE *)v28 != 1 )
            return v52 - __readfsqword(0x28u);
          a3 = v40;
          a2 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)&a1 = v5;
          *((_QWORD *)&a1 + 1) = v4;
          a4 = -65536;
          continue;
        }
        sub_11F580((__int64)&v49, (unsigned __int8 *)v28);
        HIDWORD(v49) = *(_DWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
        sub_11F9E0(v5, v4, &v49, v40, 4294901760LL);
        sub_1188E0((__int64)&v49);
        return v52 - __readfsqword(0x28u);
      case 0xE:
        sub_11F9E0(a1, *((_QWORD *)&a1 + 1), *(_QWORD *)(v6 + 8), v40, (v8 << 16) | (unsigned __int16)v7);
        v30 = (8 * *(_DWORD *)(v6 + 4)) >> 1;
        if ( (unsigned __int16)v7 >= v30 )
        {
          v7 -= v30;
          v6 = *(_QWORD *)(v6 + 8) + 16LL;
          goto LABEL_2;
        }
        v31 = v30 - (unsigned __int16)v7;
        if ( (unsigned __int16)v8 >= v31 )
        {
          v35 = *(_QWORD *)(v6 + 8);
          v10 = v8 - v31;
          v6 = v35 + 16;
          v11 = 8 * *(_DWORD *)(v35 + 20);
          if ( (unsigned __int16)v10 > (unsigned __int16)(8 * *(_WORD *)(v35 + 20)) )
            v10 = 8 * *(_DWORD *)(v35 + 20);
          v7 = 0;
        }
        else
        {
          v32 = *(_QWORD *)(v6 + 8);
          v10 = 0;
          v7 = 0;
          v6 = v32 + 16;
          v11 = 8 * *(_DWORD *)(v32 + 20);
        }
        goto LABEL_5;
      case 0xF:
        v50 = a1;
        v49 = &off_4B0040;
        LOWORD(v51) = v7;
        WORD1(v51) = v8;
        DWORD1(v51) = v40;
        sub_11A080(v6, (__int64)&v49);
        return v52 - __readfsqword(0x28u);
      default:
        return v52 - __readfsqword(0x28u);
    }
  }
}
