__int64 __fastcall sub_1D7070(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5, int a6, double a7)
{
  __int64 v11; // rdi
  __int64 result; // rax
  int flags; // edx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  char v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 func; // rax
  unsigned int *j; // rdx
  __int64 fchunk; // rax
  __int64 not_tail; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  char v33; // al
  __int64 (*v34)(); // rax
  __int64 v35; // r14
  _QWORD *v36; // r13
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 *v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int16 v45; // cx
  __int64 v46; // r13
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // r14
  __int64 v50; // r13
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  char v53; // al
  char v54; // al
  unsigned __int64 *v55; // rdx
  __m128i v56; // xmm0
  bool i; // al
  bool v58; // al
  int v59; // eax
  __int64 v60; // rdx
  __int64 first_cref_from; // rax
  unsigned int *v62; // r8
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ecx
  int v67; // eax
  char v68; // al
  __int64 v69; // [rsp+0h] [rbp-108h]
  unsigned int v70; // [rsp+0h] [rbp-108h]
  unsigned int v71; // [rsp+0h] [rbp-108h]
  unsigned int v72; // [rsp+0h] [rbp-108h]
  unsigned int v73; // [rsp+0h] [rbp-108h]
  __int64 v74; // [rsp+8h] [rbp-100h]
  _QWORD *v75; // [rsp+10h] [rbp-F8h]
  _QWORD *v76; // [rsp+18h] [rbp-F0h]
  unsigned __int64 **v77; // [rsp+20h] [rbp-E8h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  char v79; // [rsp+32h] [rbp-D6h]
  unsigned __int64 v80; // [rsp+40h] [rbp-C8h]
  unsigned int *v81; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h]
  __int64 v84; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v85; // [rsp+70h] [rbp-98h]
  __int64 v86; // [rsp+78h] [rbp-90h]
  __int64 v87; // [rsp+80h] [rbp-88h] BYREF
  __int64 v88; // [rsp+88h] [rbp-80h]
  __int64 v89; // [rsp+90h] [rbp-78h]
  __int64 v90; // [rsp+98h] [rbp-70h]
  __int64 v91; // [rsp+A0h] [rbp-68h]
  __int64 v92; // [rsp+A8h] [rbp-60h]
  __int128 v93; // [rsp+B0h] [rbp-58h]
  __int64 v94; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-40h]

  v11 = *(_QWORD *)(a1 + 1496);
  v76 = a4;
  v75 = a5;
  v95 = __readfsqword(0x28u);
  result = sub_33E140(v11, 2, a1, a3, (_DWORD)a4, a6);
  if ( (_DWORD)result )
    return result;
  if ( *(int *)(a1 + 312) > 0 )
    return result;
  if ( sub_1CE9E0(a1) )
  {
    flags = get_flags_ex(*(_QWORD *)(a1 + 40), 4);
    result = 4294967290LL;
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      return result;
  }
  v14 = a1 + 8;
  v77 = &v82;
  sub_1BD580((__int64)&v82, (__int64 **)(a1 + 8));
  v15 = getseg(*(_QWORD *)(a1 + 40));
  v18 = *(unsigned int *)(a3 + 96);
  v80 = *(_QWORD *)(v15 + 8);
  if ( (int)v18 <= 0 )
  {
LABEL_128:
    result = sub_1C0C30((__int64)v77, (_QWORD *)a2, a1, v18, v16, v17, a7);
    goto LABEL_62;
  }
  v79 = 0;
  v78 = 0;
  while ( 1 )
  {
    HIDWORD(v74) = v78;
    if ( (a6 & 0x10) == 0 )
    {
      v14 = (unsigned int)v78;
      for ( i = sub_64930(v76, v78); !i; i = sub_64930(v76, v78) )
      {
        if ( *(_DWORD *)(a3 + 96) <= (int)++v78 )
          goto LABEL_128;
        HIDWORD(v74) = v78;
        v14 = (unsigned int)v78;
      }
    }
    v19 = callui(27, v14, &callui, v18, v16, v17, v69, v74, v75, v76);
    if ( v19 )
    {
      result = 4294967278LL;
      goto LABEL_62;
    }
    v20 = (_QWORD *)(*(_QWORD *)(a3 + 72) + (v78 << 6));
    *(_QWORD *)(a2 + 400) = *v20;
    v21 = v20[1];
    *(_QWORD *)(a2 + 408) = v21;
    func = get_func(v21 - 1);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v18 = (__int64)v75;
      if ( (_QWORD *)func != v75 )
        break;
    }
LABEL_20:
    *(_QWORD *)(a2 + 16) = 0;
    if ( !v79 )
      v84 = 0;
    v27 = *(_QWORD *)(a2 + 400);
    if ( v27 < *(_QWORD *)(a2 + 408) )
    {
      do
      {
        while ( 1 )
        {
          if ( a6 >= 0 && *(_QWORD *)(a1 + 136) < sub_1CFBB0(a1, v27) )
          {
            if ( !under_debugger )
              sub_383060(51720);
            BUG();
          }
          if ( !*(_QWORD *)(a2 + 16) )
          {
            v37 = sub_67FD0(a1, *(_QWORD *)(a2 + 400), 0);
            *(_QWORD *)(a2 + 16) = v37;
            if ( !v37 )
            {
              result = 4294967293LL;
              goto LABEL_62;
            }
          }
          v69 = a2 + 24;
          result = sub_1D5CD0((_QWORD *)(a2 + 392), a2 + 24, (__int64)j, v18, v16, v17, a7);
          if ( (_DWORD)result )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 400);
            goto LABEL_62;
          }
          result = sub_1D5F60((_QWORD *)a1, v69, a3, SHIDWORD(v74));
          if ( (_DWORD)result )
            goto LABEL_62;
          if ( *(_QWORD *)(a2 + 416) != -1 )
          {
            result = sub_1D5F60((_QWORD *)a1, a2 + 424, a3, SHIDWORD(v74));
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 976LL) += *(unsigned __int16 *)(a2 + 50);
          ++*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 984LL);
          v28 = *(_QWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 384) = 0;
          v79 = sub_1B8E00(v77, *(_QWORD *)(a2 + 40), *(_DWORD *)(v28 + 72));
          if ( v79 )
          {
            v29 = *(_QWORD *)(a2 + 16);
            v27 = *(_QWORD *)(a2 + 400);
            v79 = 0;
            goto LABEL_31;
          }
          v33 = netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 104LL), *(_QWORD *)(a2 + 40), 256);
          *(_BYTE *)(a2 + 384) = v33;
          if ( v33 == 1 )
          {
            *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
          }
          else if ( v33 == 2 )
          {
            if ( *(_QWORD *)(a1 + 56) == -1 )
              *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
          }
          else
          {
            sub_1B8E80(v77, a2);
          }
          v34 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
          if ( v34 != sub_1D3370 )
          {
            result = ((__int64 (__fastcall *)(__int64))v34)(a2);
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 832LL);
          v36 = *(_QWORD **)v35;
          if ( !(8LL * *(_QWORD *)(v35 + 8)) )
            goto LABEL_162;
          do
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v36 + 16LL))(*v36, a2) )
            {
              result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v36 + 24LL))(*v36, a2);
              LOBYTE(v16) = (_DWORD)result == -2;
            }
            else
            {
              v16 = 1;
              result = 4294967294LL;
            }
            ++v36;
          }
          while ( v36 != (_QWORD *)(*(_QWORD *)v35 + 8LL * *(_QWORD *)(v35 + 8)) && (_BYTE)v16 );
          if ( (_DWORD)result == -2 )
          {
LABEL_162:
            result = sub_3C76B0(a2);
            if ( (_DWORD)result == -2 )
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
          }
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == 1 )
            goto LABEL_74;
          if ( (_DWORD)result != -4 )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 40);
            goto LABEL_62;
          }
          v14 = *(_QWORD *)(a2 + 16);
          sub_67E00(a1, v14);
          *(_QWORD *)(a2 + 16) = 0;
          v27 = *(_QWORD *)(a2 + 400);
          v32 = *(_QWORD *)(a2 + 408);
LABEL_38:
          if ( v27 >= v32 )
            goto LABEL_127;
        }
        v29 = *(_QWORD *)(a2 + 16);
        v27 = *(_QWORD *)(a2 + 400);
        v52 = *(_QWORD *)(v29 + 40);
        if ( v52 == -1 || v52 < v27 )
        {
          *(_QWORD *)(v29 + 40) = v27;
          v29 = *(_QWORD *)(a2 + 16);
        }
        if ( v27 >= *(_QWORD *)(a2 + 408) )
          goto LABEL_75;
        j = *(unsigned int **)(v29 + 56);
      }
      while ( !j );
      v14 = 0;
      v81 = *(unsigned int **)(v29 + 56);
      v53 = sub_32ED40(*j, 0);
      j = v81;
      if ( v53 )
      {
LABEL_74:
        v29 = *(_QWORD *)(a2 + 16);
        v27 = *(_QWORD *)(a2 + 400);
        goto LABEL_75;
      }
      if ( *v81 - 56 > 1 )
      {
LABEL_36:
        v27 = *(_QWORD *)(a2 + 400);
LABEL_37:
        v32 = *(_QWORD *)(a2 + 408);
        goto LABEL_38;
      }
      v54 = is_call_insn(v69, 0, v81, v18, v16, v17, v69, v74, v75, v76, v77);
      v27 = *(_QWORD *)(a2 + 400);
      j = v81;
      if ( !v54 && *((_BYTE *)v81 + 64) == 8 && (*(_BYTE *)(*((_QWORD *)v81 + 9) + 280LL) & 8) == 0 )
        goto LABEL_37;
      v29 = *(_QWORD *)(a2 + 16);
LABEL_75:
      if ( (*(_BYTE *)(v29 + 25) & 0x20) != 0 )
      {
LABEL_31:
        v30 = *(_QWORD *)(v29 + 40);
        if ( v30 != -1 && v30 >= v27 )
        {
LABEL_34:
          a7 = 0.0;
          v14 = (__int64)&v87;
          v88 = 0;
          v89 = 0;
          v90 = 0;
          v91 = 0;
          v87 = (__int64)off_4DE3D8;
          v92 = 0;
          v94 = 0;
          v93 = 0;
          sub_31EDC0(v29, &v87);
          v31 = v92;
          *(_QWORD *)(a2 + 16) = 0;
          v87 = (__int64)off_4DE3D8;
          if ( v31 )
          {
            *(_QWORD *)&v93 = 0;
            qfree(v31);
          }
          goto LABEL_36;
        }
LABEL_33:
        *(_QWORD *)(v29 + 40) = v27;
        v29 = *(_QWORD *)(a2 + 16);
        goto LABEL_34;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
      {
        if ( !HIDWORD(v27) )
          goto LABEL_78;
        goto LABEL_31;
      }
      if ( v27 == -1 )
        goto LABEL_33;
LABEL_78:
      v44 = get_flags_ex(v27, 4);
      v45 = v44;
      if ( (v44 & 0x10000) != 0 )
      {
        v27 = *(_QWORD *)(a2 + 400);
      }
      else
      {
        v69 = v44;
        first_cref_from = get_first_cref_from(*(_QWORD *)(a2 + 40));
        v27 = *(_QWORD *)(a2 + 400);
        v45 = v69;
        if ( v27 != first_cref_from )
        {
          v29 = *(_QWORD *)(a2 + 16);
          if ( v27 < v80 )
            goto LABEL_31;
          v62 = *(unsigned int **)(v29 + 56);
          if ( v62 )
          {
            v63 = *v62;
            if ( *v62 > 0x39 )
            {
              if ( v63 == 58 )
                goto LABEL_31;
            }
            else if ( v63 > 0x37 )
            {
              v68 = sub_11C750(*(int **)(v29 + 56), *(_QWORD *)(a1 + 1504), 0);
              v27 = *(_QWORD *)(a2 + 400);
              v45 = v69;
              if ( v68 )
                goto LABEL_139;
            }
            else if ( v63 - 53 <= 2 )
            {
              goto LABEL_31;
            }
          }
        }
      }
      if ( *(_QWORD *)(a1 + 40) == v27 )
      {
        sub_1D6200((__int64 *)a2, v27);
        sub_B52C0(*(_QWORD **)(a2 + 16), *(_QWORD *)(a2 + 400), 1);
        v27 = *(_QWORD *)(a2 + 400);
        v79 = 1;
        *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) = v27;
        v29 = *(_QWORD *)(a2 + 16);
        goto LABEL_31;
      }
      if ( (~v45 & 0x600) != 0
        || (v64 = sub_330F80(a1, v27), v79 = sub_332920(a1 + 8, v64), v27 = *(_QWORD *)(a2 + 400), !v79) )
      {
        v46 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL);
        sub_1D6200((__int64 *)a2, v27);
        v47 = (_QWORD *)get_func(*(_QWORD *)(a2 + 400));
        v48 = *(_QWORD *)(a2 + 400);
        if ( v47 && *v47 == v48 )
        {
          v65 = *(_QWORD *)(a1 + 1504);
          v87 = -4294967290LL;
          v66 = 8 * *(_DWORD *)(v65 + 84);
          if ( (unsigned __int64)v66 <= 0x3F )
            v48 &= ~(-1LL << v66);
          v88 = v48;
          sub_1D6450(a2, 55, (unsigned __int8 *)&v87, nullptr, nullptr);
          if ( *(_WORD *)(a2 + 50) > 1u )
            ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL) + 24LL);
          if ( v46
            && (unsigned int)(*(_DWORD *)v46 - 42) <= 0xA
            && *(_BYTE *)(v46 + 64) == 6
            && *(_QWORD *)(v46 + 72) == *(_QWORD *)(a2 + 400) )
          {
            v67 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 72LL);
            *(_BYTE *)(v46 + 64) = 7;
            *(_DWORD *)(v46 + 72) = v67;
          }
          sub_11CDA0((__int64)&v87);
          v79 = 1;
          v29 = *(_QWORD *)(a2 + 16);
          v27 = *(_QWORD *)(a2 + 400);
        }
        else
        {
          v49 = *(_QWORD **)(a2 + 16);
          v50 = *(_QWORD *)(a2 + 40);
          v51 = sub_68FD0(v49[8], v50, v48, 1);
          if ( !v51 )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 40);
            result = 4294967292LL;
            goto LABEL_62;
          }
          sub_B52C0(v49, v50, *(_DWORD *)(v51 + 72));
          v29 = *(_QWORD *)(a2 + 16);
          v79 = 1;
          v27 = *(_QWORD *)(a2 + 400);
        }
        goto LABEL_31;
      }
      if ( *(_BYTE *)(a2 + 384) == 3 )
      {
        if ( (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 104LL), *(_QWORD *)(a2 + 400), 256) != 3 )
          sub_1B8FE0((__int64)v77, (_QWORD *)a2);
        v29 = *(_QWORD *)(a2 + 16);
        v27 = *(_QWORD *)(a2 + 400);
        goto LABEL_31;
      }
LABEL_139:
      v29 = *(_QWORD *)(a2 + 16);
      goto LABEL_31;
    }
LABEL_127:
    if ( *(_DWORD *)(a3 + 96) <= (int)++v78 )
      goto LABEL_128;
  }
  fchunk = get_fchunk(*(_QWORD *)(a2 + 408) - 1LL);
  if ( !fchunk || *(char *)(fchunk + 17) >= 0 )
    goto LABEL_15;
  v87 = 0;
  func_parent_iterator_set(&v87, fchunk);
  v58 = v19;
  LODWORD(v88) = 0;
  if ( v87 && *(char *)(v87 + 17) < 0 )
    v58 = *(_DWORD *)(v87 + 32) > 0;
  if ( v58 )
  {
    v14 = (__int64)v75;
    v59 = 1;
    for ( j = nullptr; ; j = (unsigned int *)(8 * v60) )
    {
      v18 = *(_QWORD *)(v87 + 40);
      if ( *(_QWORD *)((char *)j + v18) == *v75 )
        break;
      if ( *(_DWORD *)(v87 + 32) <= v59 )
        goto LABEL_122;
      v60 = v59;
      LODWORD(v88) = v59++;
    }
    if ( v87 )
    {
      v14 = 0;
      lock_func_range(v87, 0);
    }
    goto LABEL_20;
  }
LABEL_122:
  if ( v87 )
    lock_func_range(v87, 0);
LABEL_15:
  not_tail = *(_QWORD *)(a2 + 408) - 1LL;
  if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(not_tail, 4, v26);
  *(_QWORD *)(a1 + 488) = not_tail;
  result = 4294967292LL;
LABEL_62:
  v38 = v85;
  if ( v85 )
  {
    v39 = *(_QWORD *)v85;
    if ( v86 )
    {
      if ( (*(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v72 = result;
        sub_1D44F0((__int64 *)(v39 & 0xFFFFFFFFFFFFFFFCLL));
        v38 = v85;
        result = v72;
        v39 = *(_QWORD *)v85;
      }
      *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | v39 & 3;
      *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64((__m128i)v85, (__m128i)v85);
      *(_QWORD *)v85 &= ~1uLL;
      *(_QWORD *)v85 |= 2uLL;
      v86 = 0;
    }
    else
    {
      *(_QWORD *)v85 = v85 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v85 & 3LL;
      *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64((__m128i)v85, (__m128i)v85);
      *(_QWORD *)v85 &= ~1uLL;
      *(_QWORD *)v85 |= 2uLL;
    }
    if ( v85 )
    {
      v70 = result;
      qfree(v85);
      result = v70;
    }
  }
  v40 = v82;
  if ( v82 )
  {
    v41 = *v82;
    if ( v83 )
    {
      if ( (*(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v73 = result;
        sub_1D4620((__int64 *)(v41 & 0xFFFFFFFFFFFFFFFCLL));
        v40 = v82;
        result = v73;
        v41 = *v82;
      }
      *v40 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFCLL | v41 & 3;
      v55 = v82;
      v56 = (__m128i)(unsigned __int64)v82;
      *v82 &= ~1uLL;
      *(__m128i *)(v55 + 1) = _mm_unpacklo_epi64(v56, v56);
      *v82 |= 2u;
      v83 = 0;
    }
    else
    {
      *v82 = (unsigned __int64)v82 & 0xFFFFFFFFFFFFFFFCLL | *v82 & 3;
      v42 = v82;
      v43 = (__m128i)(unsigned __int64)v82;
      *v82 &= ~1uLL;
      *(__m128i *)(v42 + 1) = _mm_unpacklo_epi64(v43, v43);
      *v82 |= 2u;
    }
    if ( v82 )
    {
      v71 = result;
      qfree(v82);
      return v71;
    }
  }
  return result;
}
