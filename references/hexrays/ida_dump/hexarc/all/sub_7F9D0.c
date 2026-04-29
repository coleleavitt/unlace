__int64 __fastcall sub_7F9D0(unsigned __int64 **a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int8 *v7; // rax
  __int64 v8; // rax
  unsigned __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  unsigned __int8 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rax
  __int64 i; // r13
  __int16 v21; // dx
  __int64 v22; // rax
  const void **v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r14d
  int v31; // r13d
  __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r15
  bool v36; // si
  _BYTE *v37; // rax
  const void **v38; // rsi
  const char *v39; // rdi
  __int64 v40; // rax
  const char *v41; // [rsp+10h] [rbp-58h] BYREF
  __int128 v42; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  while ( 2 )
  {
    v4 = unpack_dd(*a1);
    if ( v4 <= 0x45 )
    {
      *(_DWORD *)(a2 + 8) = v4;
      v5 = *a1;
      v6 = (*a1)[1];
      if ( *((_DWORD *)a1 + 4) > 3u && (v7 = (unsigned __int8 *)*v5, *v5 < v6) )
      {
        v14 = *v7;
        v10 = -1;
        *v5 = (unsigned __int64)(v7 + 1);
        if ( v14 > 1u || (v8 = unpack_dq(*a1, (*a1)[1]), v9 = a1[1], v10 = *v9 + ~v8, v14) )
        {
LABEL_7:
          *(_QWORD *)a2 = v10;
          v11 = unpack_dd(*a1);
          *(_DWORD *)(a2 + 12) = v11;
          if ( *((_DWORD *)a1 + 4) > 2u )
            *(_DWORD *)(a2 + 12) = v11 - 1;
          sub_75D50(&v41, (const void ***)a1);
          copy_tinfo_t(a2 + 48, &v41);
          clear_tinfo_t(&v41);
          *(_DWORD *)(a2 + 56) = unpack_dd(*a1);
          switch ( *(_DWORD *)(a2 + 8) )
          {
            case 0:
            case 0x45:
              return 1;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2A:
            case 0x2B:
            case 0x2C:
            case 0x2D:
            case 0x3A:
              v12 = j__qalloc_or_throw(64);
              *(_QWORD *)v12 = -1;
              *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v12 + 40) = 0;
              *(_QWORD *)(v12 + 48) = 0;
              *(_DWORD *)(v12 + 56) = 0;
              *(_OWORD *)(v12 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v12;
              if ( !(unsigned __int8)sub_7F9D0(a1, v12) )
                return 0;
              v15 = j__qalloc_or_throw(64);
              *(_QWORD *)v15 = -1;
              *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v15 + 40) = 0;
              *(_QWORD *)(v15 + 48) = 0;
              *(_DWORD *)(v15 + 56) = 0;
              *(_OWORD *)(v15 + 24) = 0;
              *(_QWORD *)(a2 + 32) = v15;
              if ( !(unsigned __int8)sub_7F9D0(a1, v15) )
                return 0;
              if ( *(_DWORD *)(a2 + 8) != 16 )
                return 1;
              v40 = j__qalloc_or_throw(64);
              *(_QWORD *)v40 = -1;
              *(_QWORD *)(v40 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v40 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v40 + 40) = 0;
              *(_QWORD *)(v40 + 48) = 0;
              *(_DWORD *)(v40 + 56) = 0;
              *(_OWORD *)(v40 + 24) = 0;
              *(_QWORD *)(a2 + 40) = v40;
              a2 = v40;
              continue;
            case 0x2E:
            case 0x2F:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x43:
              goto LABEL_20;
            case 0x33:
              goto LABEL_19;
            case 0x39:
              v27 = j__qalloc_or_throw(64);
              *(_QWORD *)v27 = -1;
              *(_QWORD *)(v27 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v27 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v27 + 40) = 0;
              *(_QWORD *)(v27 + 48) = 0;
              *(_DWORD *)(v27 + 56) = 0;
              *(_OWORD *)(v27 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v27;
              if ( !(unsigned __int8)sub_7F9D0(a1, v27) )
                return 0;
              v28 = qalloc_or_throw(40);
              *(_QWORD *)v28 = 0;
              *(_QWORD *)(v28 + 24) = 0;
              *(_DWORD *)(v28 + 32) = 0;
              *(_OWORD *)(v28 + 8) = 0;
              *(_QWORD *)(a2 + 32) = v28;
              sub_75D50(&v41, (const void ***)a1);
              copy_tinfo_t(*(_QWORD *)(a2 + 32) + 24LL, &v41);
              clear_tinfo_t(&v41);
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) = unpack_dd(*a1);
              v29 = unpack_dd(*a1);
              v30 = v29;
              if ( (*a1)[1] - **a1 < v29 )
                return 0;
              if ( v29 )
              {
                v31 = 0;
                do
                {
                  v32 = *(__int64 **)(a2 + 32);
                  v33 = v32[1];
                  v34 = *v32;
                  if ( v32[2] < (unsigned __int64)(v33 + 1) )
                  {
                    v34 = qvector_reserve(v32, v34, v33 + 1, 72);
                    *v32 = v34;
                    v33 = v32[1];
                  }
                  v35 = v34 + 72 * v33;
                  v36 = 0;
                  *(_QWORD *)v35 = -1;
                  *(_DWORD *)(v35 + 8) = 0;
                  *(_QWORD *)(v35 + 12) = -1;
                  *(_QWORD *)(v35 + 40) = 0;
                  *(_QWORD *)(v35 + 48) = 0;
                  *(_DWORD *)(v35 + 56) = 0;
                  *(_BYTE *)(v35 + 60) = 0;
                  *(_QWORD *)(v35 + 64) = 0;
                  *(_OWORD *)(v35 + 24) = 0;
                  ++v32[1];
                  v37 = (_BYTE *)**a1;
                  if ( (unsigned __int64)v37 < (*a1)[1] )
                    v36 = *v37++ != 0;
                  **a1 = (unsigned __int64)v37;
                  *(_BYTE *)(v35 + 60) = v36;
                  sub_75D50(&v41, (const void ***)a1);
                  copy_tinfo_t(v35 + 64, &v41);
                  ++v31;
                  clear_tinfo_t(&v41);
                  sub_7F9D0(a1, v35);
                }
                while ( v31 != v30 );
              }
              return 1;
            case 0x3B:
              *(_DWORD *)(a2 + 32) = unpack_dd(*a1);
              goto LABEL_20;
            case 0x3C:
              *(_DWORD *)(a2 + 32) = unpack_dd(*a1);
LABEL_19:
              *(_DWORD *)(a2 + 40) = unpack_dd(*a1);
LABEL_20:
              v16 = j__qalloc_or_throw(64);
              *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v16 = -1;
              *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v16 + 40) = 0;
              *(_QWORD *)(v16 + 48) = 0;
              *(_DWORD *)(v16 + 56) = 0;
              *(_OWORD *)(v16 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v16;
              a2 = v16;
              continue;
            case 0x3D:
              v17 = j__qalloc_or_throw(48);
              *(_QWORD *)v17 = 0;
              *(_QWORD *)(v17 + 8) = 0;
              *(_QWORD *)(v17 + 16) = 0;
              *(_QWORD *)(v17 + 40) = 0;
              *(_OWORD *)(v17 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v17;
              sub_7B110((const void ***)a1, v17);
              return 1;
            case 0x3E:
              v18 = 0;
              v19 = j__qalloc_or_throw(20);
              *(_QWORD *)(a2 + 24) = v19;
              for ( i = v19; ; i = *(_QWORD *)(a2 + 24) )
              {
                v21 = unpack_dw(*a1, (*a1)[1]);
                v22 = v18++;
                *(_WORD *)(i + 2 * v22) = v21;
                if ( v18 == 8 )
                  break;
              }
              *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) = unpack_dd(*a1);
              return 1;
            case 0x3F:
              v23 = (const void **)*a1;
              v41 = nullptr;
              v42 = 0;
              sub_75880((__int64 *)&v41, v23, (unsigned __int64)v23[1]);
              v24 = s1;
              if ( (_QWORD)v42 )
                v24 = v41;
              *(_QWORD *)(a2 + 24) = qstrdup(v24);
              v25 = (__int64)v41;
              if ( v41 )
                goto LABEL_29;
              return 1;
            case 0x40:
              *(_QWORD *)(a2 + 24) = *a1[1] + unpack_dq(*a1, (*a1)[1]);
              *(_DWORD *)(a2 + 40) = unpack_dd(*a1);
              return 1;
            case 0x41:
              *(_QWORD *)(a2 + 24) = a1[1][1];
              *(_DWORD *)(a2 + 32) = unpack_dd(*a1);
              *(_DWORD *)(a2 + 40) = unpack_dd(*a1);
              return 1;
            case 0x42:
              v26 = (_QWORD *)j__qalloc_or_throw(32);
              *v26 = -1;
              v26[1] = -4294967226LL;
              v26[2] = 0xFFFFFFFFLL;
              v26[3] = 0;
              *(_QWORD *)(a2 + 24) = v26;
              return sub_7EB50((char ***)a1, (__int64)v26);
            case 0x44:
              v38 = (const void **)*a1;
              v41 = nullptr;
              v42 = 0;
              sub_75880((__int64 *)&v41, v38, (unsigned __int64)v38[1]);
              v39 = s1;
              if ( (_QWORD)v42 )
                v39 = v41;
              *(_QWORD *)(a2 + 24) = qstrdup(v39);
              v25 = (__int64)v41;
              if ( v41 )
              {
LABEL_29:
                *(_QWORD *)&v42 = 0;
                qfree(v25);
              }
              return 1;
            default:
              *(_DWORD *)(a2 + 8) = 0;
              if ( !under_debugger )
                sub_37B760(52347);
              BUG();
          }
        }
      }
      else
      {
        v8 = unpack_dq(v5, v6);
        v9 = a1[1];
      }
      v10 = *v9 + v8;
      goto LABEL_7;
    }
    return 0;
  }
}
