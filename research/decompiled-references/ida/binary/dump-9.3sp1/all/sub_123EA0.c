unsigned __int64 __fastcall sub_123EA0(__int128 a1, __int64 a2, __int64 a3, unsigned int a4)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rbp
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v31; // edi
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax
  int v35; // edx
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // [rsp+0h] [rbp-98h]
  unsigned __int64 v42; // [rsp+0h] [rbp-98h]
  unsigned __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 v47; // [rsp+8h] [rbp-90h]
  int v48; // [rsp+1Ch] [rbp-7Ch] BYREF
  _QWORD v49[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+30h] [rbp-68h] BYREF
  __int128 v51; // [rsp+38h] [rbp-60h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  while ( 2 )
  {
    v4 = *((__int64 **)&a1 + 1);
    v5 = a1;
    v6 = a2;
    v41 = a3;
    v53 = __readfsqword(0x28u);
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
    if ( v13 != sub_11B400 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD))v13)(
              v12,
              *((_QWORD *)&a1 + 1),
              a1,
              v6,
              v41,
              (v8 << 16) | (unsigned __int16)v7);
      v12 = v45;
      if ( v14 )
        return v53 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)v6 )
    {
      case 1:
        if ( (_WORD)v8 == (_WORD)v11 && !(_WORD)v7 )
        {
          v35 = *(_DWORD *)(v6 + 4);
          v36 = *(_DWORD *)(v6 + 8);
          v50 = nullptr;
          *(_QWORD *)&v51 = 0;
          sub_63E80((__int64 *)&v50, v36, v35);
          *((_QWORD *)&v51 + 1) = 0;
          v52 = 0;
          sub_64280(v4, (__int64 *)&v50);
          sub_316CB0(v4 + 2, (char *)&v51 + 8);
          if ( *((_QWORD *)&v51 + 1) )
          {
            *(_QWORD *)&v52 = 0;
            qfree(*((__int64 *)&v51 + 1));
          }
LABEL_20:
          qfree((__int64)v50);
        }
        else if ( (unsigned __int8)sub_11BC00(&v48, v49, *(_QWORD *)(a1 + 480), v6, (v8 << 16) | (unsigned __int16)v7) )
        {
          v16 = *(_DWORD *)(v6 + 8) + v48;
          v50 = nullptr;
          *(_QWORD *)&v51 = 0;
          sub_63E80((__int64 *)&v50, v16, v49[0]);
          *((_QWORD *)&v51 + 1) = 0;
          v52 = 0;
          sub_64280(v4, (__int64 *)&v50);
          sub_316CB0(v4 + 2, (char *)&v51 + 8);
          if ( *((_QWORD *)&v51 + 1) )
          {
            *(_QWORD *)&v52 = 0;
            qfree(*((__int64 *)&v51 + 1));
          }
          qfree((__int64)v50);
        }
        return v53 - __readfsqword(0x28u);
      case 4:
        sub_124680(&v50, a1, *(_QWORD *)(v6 + 8), v41);
        sub_64280(*((__int64 **)&a1 + 1), (__int64 *)&v50);
        sub_316CB0(*((_QWORD *)&a1 + 1) + 16LL, (char *)&v51 + 8);
        if ( *((_QWORD *)&v51 + 1) )
        {
          *(_QWORD *)&v52 = 0;
          qfree(*((__int64 *)&v51 + 1));
        }
        goto LABEL_20;
      case 5:
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(**(_QWORD **)(v6 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL));
        goto LABEL_22;
      case 6:
        if ( *(_DWORD *)(v6 + 4) == -1 )
          return v53 - __readfsqword(0x28u);
        v43 = *(_QWORD *)(v6 + 8);
        v20 = sub_343460(*(_QWORD *)(a1 + 480), v43);
        v17 = v43;
        if ( v20 )
          return v53 - __readfsqword(0x28u);
LABEL_22:
        if ( (_WORD)v8 == (_WORD)v11 && !(_WORD)v7 )
        {
          v18 = *(int *)(v6 + 4);
          v19 = v17;
        }
        else
        {
          v42 = v17;
          if ( !(unsigned __int8)sub_11BC00(
                                   (int *)v49,
                                   &v50,
                                   *(_QWORD *)(a1 + 480),
                                   v6,
                                   (v8 << 16) | (unsigned __int16)v7) )
            return v53 - __readfsqword(0x28u);
          v18 = (int)v50;
          v19 = v42 + SLODWORD(v49[0]);
        }
        return sub_122B20(v4, v19, v18);
      case 8:
        v21 = *(_QWORD *)(v6 + 8);
        v46 = v12;
        v22 = sub_32FB50(v21, *((_QWORD *)&a1 + 1), a1, v41);
        v25 = v46;
        if ( v22 )
        {
          if ( !*(_DWORD *)(v21 + 20) )
          {
            if ( (v41 & 1) == 0 )
              return v53 - __readfsqword(0x28u);
            goto LABEL_48;
          }
        }
        else
        {
          if ( (v41 & 1) == 0 )
          {
            if ( !*(_DWORD *)(v21 + 20) )
              return v53 - __readfsqword(0x28u);
            goto LABEL_33;
          }
          v50 = nullptr;
          v51 = 0;
          v37 = *(_QWORD *)(v21 + 224);
          if ( v37 )
          {
            *((_QWORD *)&v51 + 1) = *(_QWORD *)(v21 + 224);
            v50 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v37, *((__int64 *)&a1 + 1), v23, v24);
            memcpy(v50, *(const void **)(v21 + 216), 16 * v37);
            *(_QWORD *)&v51 = v37;
            v25 = v46;
          }
          v38 = *(int *)(v21 + 12);
          v47 = v25;
          v39 = *(_DWORD *)(v21 + 16) - v38;
          v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 16LL)
              & (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1440LL) + v38);
          v49[1] = v39;
          v49[0] = v40;
          sub_317BD0(&v50, v49);
          sub_316CB0(*((_QWORD *)&a1 + 1) + 16LL, &v50);
          v25 = v47;
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree((__int64)v50);
            v25 = v47;
          }
          if ( !*(_DWORD *)(v21 + 20) )
          {
LABEL_48:
            v44 = v25;
            sub_64280(*((__int64 **)&a1 + 1), (__int64 *)(v25 + 144));
            return sub_316CB0(*((_QWORD *)&a1 + 1) + 16LL, v44 + 160);
          }
        }
LABEL_33:
        v26 = *(_QWORD *)(v21 + 24);
        v27 = v26 + 80LL * *(_QWORD *)(v21 + 32);
        while ( v26 != v27 )
        {
          v28 = *(_DWORD *)(v26 + 4);
          v29 = v26;
          v26 += 80;
          sub_123EA0(a1, *((_QWORD *)&a1 + 1), v29, v41, (unsigned int)(v28 << 19));
        }
        return v53 - __readfsqword(0x28u);
      case 9:
        *(_QWORD *)&a1 = **(_QWORD **)(v6 + 8);
        if ( (*(_DWORD *)a1 & 4) != 0 || (*(_DWORD *)a1 & 0xC0000) == 0x40000 )
          return v53 - __readfsqword(0x28u);
        return sub_11BCA0((_QWORD *)a1, SDWORD2(a1), v6, (v8 << 16) | (unsigned __int16)v7);
      case 0xA:
        v30 = *(_QWORD *)(v6 + 8);
        v31 = *(_DWORD *)(v30 + 16);
        if ( v31 <= 0 )
        {
          if ( !v31 || *(_BYTE *)v30 != 1 )
            return v53 - __readfsqword(0x28u);
          a3 = v41;
          a2 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)&a1 = v5;
          *((_QWORD *)&a1 + 1) = v4;
          a4 = -65536;
          continue;
        }
        sub_123A40((__int64)&v50, (unsigned __int8 *)v30, a2, a3);
        HIDWORD(v50) = *(_DWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
        sub_123EA0(v5, v4, &v50, v41, 4294901760LL);
        sub_11CDA0((__int64)&v50);
        return v53 - __readfsqword(0x28u);
      case 0xE:
        sub_123EA0(a1, *((_QWORD *)&a1 + 1), *(_QWORD *)(v6 + 8), v41, (v8 << 16) | (unsigned __int16)v7);
        a2 = (unsigned __int16)v7;
        v32 = (8 * *(_DWORD *)(v6 + 4)) >> 1;
        if ( (unsigned __int16)v7 >= v32 )
        {
          v7 -= v32;
          v6 = *(_QWORD *)(v6 + 8) + 16LL;
          goto LABEL_2;
        }
        v33 = v32 - (unsigned __int16)v7;
        if ( (unsigned __int16)v8 >= v33 )
        {
          a2 = *(_QWORD *)(v6 + 8);
          v10 = v8 - v33;
          v6 = a2 + 16;
          v11 = 8 * *(_DWORD *)(a2 + 20);
          if ( (unsigned __int16)v10 > (unsigned __int16)(8 * *(_WORD *)(a2 + 20)) )
            v10 = 8 * *(_DWORD *)(a2 + 20);
          v7 = 0;
        }
        else
        {
          v34 = *(_QWORD *)(v6 + 8);
          v10 = 0;
          v7 = 0;
          v6 = v34 + 16;
          v11 = 8 * *(_DWORD *)(v34 + 20);
        }
        goto LABEL_5;
      case 0xF:
        v51 = a1;
        v50 = &off_4DD5C0;
        LOWORD(v52) = v7;
        WORD1(v52) = v8;
        DWORD1(v52) = v41;
        sub_11E540((_BYTE *)v6);
        return v53 - __readfsqword(0x28u);
      default:
        return v53 - __readfsqword(0x28u);
    }
  }
}
