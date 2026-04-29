__int64 __fastcall sub_86090(const void ***a1, __int64 a2)
{
  unsigned int v4; // eax
  const void **v5; // rdi
  unsigned __int8 *v6; // rax
  __int64 v7; // rax
  const void **v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  __int64 i; // r13
  __int16 v29; // dx
  __int64 v30; // rax
  const void **v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // r14d
  int v41; // r13d
  __int64 *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r15
  bool v46; // si
  _BYTE *v47; // rax
  const void **v48; // rsi
  __int64 v49; // rax
  __int64 v50; // [rsp+10h] [rbp-58h] BYREF
  __int128 v51; // [rsp+18h] [rbp-50h]
  unsigned __int64 v52; // [rsp+28h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  while ( 2 )
  {
    v4 = unpack_dd();
    if ( v4 <= 0x45 )
    {
      *(_DWORD *)(a2 + 8) = v4;
      v5 = *a1;
      if ( *((_DWORD *)a1 + 4) > 3u && (v6 = (unsigned __int8 *)*v5, *v5 < (*a1)[1]) )
      {
        v19 = *v6;
        v9 = -1;
        *v5 = v6 + 1;
        if ( v19 > 1u || (v7 = unpack_dq(), v8 = a1[1], v9 = (__int64)*v8 + ~v7, v19) )
        {
LABEL_7:
          *(_QWORD *)a2 = v9;
          v10 = unpack_dd();
          *(_DWORD *)(a2 + 12) = v10;
          if ( *((_DWORD *)a1 + 4) > 2u )
            *(_DWORD *)(a2 + 12) = v10 - 1;
          sub_7C2D0(&v50, a1);
          copy_tinfo_t();
          clear_tinfo_t();
          v11 = (__int64)(*a1)[1];
          *(_DWORD *)(a2 + 56) = unpack_dd();
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
              v14 = j__qalloc_or_throw(64, v11, v12, v13);
              *(_QWORD *)v14 = -1;
              v15 = v14;
              *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v14 + 40) = 0;
              *(_QWORD *)(v14 + 48) = 0;
              *(_DWORD *)(v14 + 56) = 0;
              *(_OWORD *)(v14 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v14;
              if ( !(unsigned __int8)sub_86090(a1, v14) )
                return 0;
              v20 = j__qalloc_or_throw(64, v15, v16, v17);
              *(_QWORD *)v20 = -1;
              v21 = v20;
              *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v20 + 40) = 0;
              *(_QWORD *)(v20 + 48) = 0;
              *(_DWORD *)(v20 + 56) = 0;
              *(_OWORD *)(v20 + 24) = 0;
              *(_QWORD *)(a2 + 32) = v20;
              if ( !(unsigned __int8)sub_86090(a1, v20) )
                return 0;
              if ( *(_DWORD *)(a2 + 8) != 16 )
                return 1;
              v49 = j__qalloc_or_throw(64, v21, v22, v23);
              *(_QWORD *)v49 = -1;
              *(_QWORD *)(v49 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v49 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v49 + 40) = 0;
              *(_QWORD *)(v49 + 48) = 0;
              *(_DWORD *)(v49 + 56) = 0;
              *(_OWORD *)(v49 + 24) = 0;
              *(_QWORD *)(a2 + 40) = v49;
              a2 = v49;
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
              v34 = j__qalloc_or_throw(64, v11, v12, v13);
              *(_QWORD *)v34 = -1;
              v35 = v34;
              *(_QWORD *)(v34 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v34 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v34 + 40) = 0;
              *(_QWORD *)(v34 + 48) = 0;
              *(_DWORD *)(v34 + 56) = 0;
              *(_OWORD *)(v34 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v34;
              if ( !(unsigned __int8)sub_86090(a1, v34) )
                return 0;
              v38 = qalloc_or_throw(40, v35, v36, v37);
              *(_QWORD *)v38 = 0;
              *(_QWORD *)(v38 + 24) = 0;
              *(_DWORD *)(v38 + 32) = 0;
              *(_OWORD *)(v38 + 8) = 0;
              *(_QWORD *)(a2 + 32) = v38;
              sub_7C2D0(&v50, a1);
              copy_tinfo_t();
              clear_tinfo_t();
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) = unpack_dd();
              v39 = unpack_dd();
              v40 = v39;
              if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v39 )
                return 0;
              if ( v39 )
              {
                v41 = 0;
                do
                {
                  v42 = *(__int64 **)(a2 + 32);
                  v43 = v42[1];
                  v44 = *v42;
                  if ( v42[2] < (unsigned __int64)(v43 + 1) )
                  {
                    v44 = qvector_reserve((__int64)v42, v44, v43 + 1, 72);
                    *v42 = v44;
                    v43 = v42[1];
                  }
                  v45 = v44 + 72 * v43;
                  v46 = 0;
                  *(_QWORD *)v45 = -1;
                  *(_DWORD *)(v45 + 8) = 0;
                  *(_QWORD *)(v45 + 12) = -1;
                  *(_QWORD *)(v45 + 40) = 0;
                  *(_QWORD *)(v45 + 48) = 0;
                  *(_DWORD *)(v45 + 56) = 0;
                  *(_BYTE *)(v45 + 60) = 0;
                  *(_QWORD *)(v45 + 64) = 0;
                  *(_OWORD *)(v45 + 24) = 0;
                  ++v42[1];
                  v47 = **a1;
                  if ( v47 < (*a1)[1] )
                    v46 = *v47++ != 0;
                  **a1 = v47;
                  *(_BYTE *)(v45 + 60) = v46;
                  sub_7C2D0(&v50, a1);
                  copy_tinfo_t();
                  ++v41;
                  clear_tinfo_t();
                  sub_86090(a1, v45);
                }
                while ( v41 != v40 );
              }
              return 1;
            case 0x3B:
              v11 = (__int64)(*a1)[1];
              *(_DWORD *)(a2 + 32) = unpack_dd();
              goto LABEL_20;
            case 0x3C:
              *(_DWORD *)(a2 + 32) = unpack_dd();
LABEL_19:
              v11 = (__int64)(*a1)[1];
              *(_DWORD *)(a2 + 40) = unpack_dd();
LABEL_20:
              v24 = j__qalloc_or_throw(64, v11, v12, v13);
              *(_QWORD *)(v24 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v24 = -1;
              *(_QWORD *)(v24 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v24 + 40) = 0;
              *(_QWORD *)(v24 + 48) = 0;
              *(_DWORD *)(v24 + 56) = 0;
              *(_OWORD *)(v24 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v24;
              a2 = v24;
              continue;
            case 0x3D:
              v25 = j__qalloc_or_throw(48, v11, v12, v13);
              *(_QWORD *)v25 = 0;
              *(_QWORD *)(v25 + 8) = 0;
              *(_QWORD *)(v25 + 16) = 0;
              *(_QWORD *)(v25 + 40) = 0;
              *(_OWORD *)(v25 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v25;
              sub_817D0(a1, v25);
              return 1;
            case 0x3E:
              v26 = 0;
              v27 = j__qalloc_or_throw(20, v11, v12, v13);
              *(_QWORD *)(a2 + 24) = v27;
              for ( i = v27; ; i = *(_QWORD *)(a2 + 24) )
              {
                v29 = unpack_dw();
                v30 = v26++;
                *(_WORD *)(i + 2 * v30) = v29;
                if ( v26 == 8 )
                  break;
              }
              *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) = unpack_dd();
              return 1;
            case 0x3F:
              v31 = *a1;
              v50 = 0;
              v51 = 0;
              sub_7BE00(&v50, v31, (unsigned __int64)v31[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              v32 = v50;
              if ( v50 )
                goto LABEL_27;
              return 1;
            case 0x40:
              *(_QWORD *)(a2 + 24) = (char *)*a1[1] + unpack_dq();
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x41:
              *(_QWORD *)(a2 + 24) = a1[1][1];
              *(_DWORD *)(a2 + 32) = unpack_dd();
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x42:
              v33 = (_QWORD *)j__qalloc_or_throw(32, v11, v12, v13);
              *v33 = -1;
              v33[1] = -4294967226LL;
              v33[2] = 0xFFFFFFFFLL;
              v33[3] = 0;
              *(_QWORD *)(a2 + 24) = v33;
              return sub_85210(a1, (__int64)v33);
            case 0x44:
              v48 = *a1;
              v50 = 0;
              v51 = 0;
              sub_7BE00(&v50, v48, (unsigned __int64)v48[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              v32 = v50;
              if ( v50 )
              {
LABEL_27:
                *(_QWORD *)&v51 = 0;
                qfree(v32);
              }
              return 1;
            default:
              *(_DWORD *)(a2 + 8) = 0;
              if ( !under_debugger )
                sub_383060(52347);
              BUG();
          }
        }
      }
      else
      {
        v7 = unpack_dq();
        v8 = a1[1];
      }
      v9 = (__int64)*v8 + v7;
      goto LABEL_7;
    }
    return 0;
  }
}
