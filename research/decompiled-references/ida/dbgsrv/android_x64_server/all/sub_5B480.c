/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B480
// Address: 0x000000000005B480

//----- (000000000005B480) ----------------------------------------------------
__int64 __fastcall sub_5B480(const char *a1, _DWORD *a2, char a3)
{
  _QWORD *v4; // rax
  void *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  const char *v12; // rdx
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // rcx
  const char *v16; // rsi
  unsigned int v17; // r13d
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rsi
  const char *v22; // rsi
  char v23; // r15
  const char *v24; // rsi
  unsigned int v25; // eax
  char v26; // r14
  unsigned __int32 v28; // [rsp+Ch] [rbp-51Ch] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-518h] BYREF
  __int64 v30; // [rsp+20h] [rbp-508h]
  _BYTE v31[40]; // [rsp+30h] [rbp-4F8h] BYREF
  int v32; // [rsp+58h] [rbp-4D0h]
  int v33; // [rsp+5Ch] [rbp-4CCh]
  int v34[4]; // [rsp+60h] [rbp-4C8h]
  unsigned __int64 v35[5]; // [rsp+70h] [rbp-4B8h] BYREF
  __int128 s; // [rsp+98h] [rbp-490h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-480h]
  void *v38; // [rsp+B8h] [rbp-470h]
  int v39[2]; // [rsp+C0h] [rbp-468h]
  int v40[2]; // [rsp+C8h] [rbp-460h]
  unsigned __int16 v41; // [rsp+D0h] [rbp-458h]
  int v42; // [rsp+D4h] [rbp-454h]
  _BYTE v43[56]; // [rsp+280h] [rbp-2A8h] BYREF
  __int64 v44; // [rsp+2B8h] [rbp-270h]
  __int64 v45[4]; // [rsp+2D0h] [rbp-258h] BYREF
  __int64 v46; // [rsp+2F0h] [rbp-238h]
  unsigned __int64 v47; // [rsp+2F8h] [rbp-230h]
  unsigned int v48; // [rsp+320h] [rbp-208h]
  unsigned int v49; // [rsp+330h] [rbp-1F8h]
  unsigned int v50; // [rsp+340h] [rbp-1E8h]
  char v51; // [rsp+378h] [rbp-1B0h]
  __int128 v52; // [rsp+3E0h] [rbp-148h] BYREF
  __int128 v53; // [rsp+3F0h] [rbp-138h]
  bool (__fastcall *v54)(__int64, int); // [rsp+470h] [rbp-B8h]
  char v55; // [rsp+47Ch] [rbp-ACh]
  char v56; // [rsp+47Dh] [rbp-ABh]
  __int64 v57; // [rsp+498h] [rbp-90h]
  unsigned __int64 v58; // [rsp+4F0h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  v4 = open_linput(a1, a3);
  if ( v4 )
  {
    v5 = v4;
    sub_A40E0();
    sub_4FDB0((__int64)v43, (__int64)v5, 0);
    v54 = sub_5D930;
    v6 = -1;
    if ( (unsigned __int8)sub_4CA20((__int64)v43)
      && (unsigned __int8)sub_4CB70((__m128 *)v43)
      && (unsigned __int8)(v55 - 1) <= 1u
      && (unsigned __int8)(v56 - 1) <= 1u )
    {
      memset(v35, 0, 28);
      if ( !v57 )
        goto LABEL_9;
      v6 = -1;
      if ( (unsigned __int8)sub_51810((__int64)v43) )
      {
        qword_155778 = v44;
LABEL_9:
        sub_50D00((__int64)v43);
        *(_OWORD *)v35 = *(_OWORD *)v45;
        *(_OWORD *)((char *)&v35[1] + 4) = *(_OWORD *)((char *)&v45[1] + 4);
        if ( v45[0] )
        {
          memset(&s, 0, 0x1E8u);
        }
        else
        {
          *(_OWORD *)v35 = *(_OWORD *)v43;
          *(_OWORD *)((char *)&v35[1] + 4) = *(_OWORD *)&v43[12];
          v7 = *(_QWORD *)v43;
          memset(&s, 0, 0x1E8u);
          if ( !v7 )
            goto LABEL_37;
        }
        memset(v31, 0, 24);
        *(_QWORD *)v31 = qvector_reserve((__int64)v31, nullptr, 0xAu, 0x10u);
        if ( !sub_56D00((__int64)v43, (__int64)v31, v35)
          || !(unsigned __int8)sub_57020((__int64)v43, (__int64)&s, (__int64)v31)
          || (a2[2] & 4) == 0 )
        {
LABEL_35:
          if ( *(_QWORD *)v31 )
          {
            *(_QWORD *)&v31[8] = 0;
            qfree(*(void **)v31);
            *(_QWORD *)v31 = 0;
            *(_QWORD *)&v31[16] = 0;
          }
LABEL_37:
          v14 = a2[2];
          if ( (v14 & 2) != 0 && v49 )
          {
            if ( !v51 )
            {
              if ( !(_BYTE)under_debugger )
                interr(20099);
              goto LABEL_103;
            }
            if ( v47 > v49 )
            {
              v15 = (unsigned __int64)v49 << 6;
              if ( v15 + v46 )
              {
                memset(v31, 0, 24);
                sub_53CA0((__int64)v43, (__int64)v31, *(_QWORD *)(v46 + v15 + 24));
                if ( *(_QWORD *)&v31[8] )
                  v16 = *(const char **)v31;
                else
                  v16 = s1;
                v6 = (*(__int64 (__fastcall **)(_DWORD *, const char *))(*(_QWORD *)a2 + 8LL))(a2, v16);
                if ( *(_QWORD *)v31 )
                {
                  *(_QWORD *)&v31[8] = 0;
                  qfree(*(void **)v31);
                  *(_QWORD *)v31 = 0;
                  *(_QWORD *)&v31[16] = 0;
                }
                if ( v6 )
                  goto LABEL_95;
                v14 = a2[2];
              }
            }
          }
          v6 = 0;
          v17 = 0;
          if ( (v14 & 1) == 0 )
            goto LABEL_68;
          v18 = v48;
          if ( !(v50 | v48) )
          {
            v17 = 0;
            if ( (__int64)v38 <= 0 || !*(_QWORD *)v40 )
              goto LABEL_67;
            v32 = 0;
            *(_OWORD *)v31 = 0;
            *(_QWORD *)v34 = 0;
            *(_QWORD *)&v31[16] = *(_QWORD *)v39;
            *(_QWORD *)&v31[24] = v38;
            *(_QWORD *)&v31[32] = *(_QWORD *)v40;
            v33 = v42;
            *(_DWORD *)&v31[4] = 11;
            *(_QWORD *)&v34[2] = v41;
            v20 = sub_5D940(v43, (__int64)v31, 2, (__int64 (__fastcall ***)(_QWORD, __int64, const char *))a2);
            goto LABEL_66;
          }
          if ( v50 )
          {
            if ( !v51 )
            {
              if ( !(_BYTE)under_debugger )
                interr(20099);
              goto LABEL_103;
            }
            v19 = 0;
            if ( v47 > v50 )
              v19 = v46 + ((unsigned __int64)v50 << 6);
            v17 = sub_5D940(v43, v19, 1, (__int64 (__fastcall ***)(_QWORD, __int64, const char *))a2);
            if ( !(_DWORD)v18 )
              goto LABEL_67;
          }
          else
          {
            v17 = 0;
            if ( !v48 )
              goto LABEL_67;
          }
          if ( !v17 )
          {
            if ( v51 )
            {
              v21 = 0;
              if ( v47 > v18 )
                v21 = v46 + (v18 << 6);
              v20 = sub_5D940(v43, v21, 2, (__int64 (__fastcall ***)(_QWORD, __int64, const char *))a2);
LABEL_66:
              v17 = v20;
              goto LABEL_67;
            }
            if ( !(_BYTE)under_debugger )
              interr(20099);
LABEL_103:
            BUG();
          }
LABEL_67:
          v14 = a2[2];
LABEL_68:
          *(_QWORD *)v31 = v43;
          memset(&v31[8], 0, 25);
          if ( (v14 & 0x10) != 0 )
          {
            sub_526F0((__int64)v43, (__int64)v31);
            *(_OWORD *)ptr = 0;
            v30 = 0;
            if ( sub_58D40((__int64)v31, (__int64)ptr)
              && (!ptr[1] ? (v22 = s1) : (v22 = (const char *)ptr[0]),
                  v6 = (*(__int64 (__fastcall **)(_DWORD *, const char *))(*(_QWORD *)a2 + 32LL))(a2, v22),
                  v17 = 0,
                  v6) )
            {
              v23 = 0;
              v17 = v6;
            }
            else
            {
              v6 = 0;
              v23 = 1;
            }
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              v30 = 0;
            }
            if ( !v23 )
              goto LABEL_93;
            v14 = a2[2];
          }
          if ( (v14 & 0x20) == 0 )
            goto LABEL_92;
          if ( (*(_OWORD *)ptr = 0, v30 = 0, v51)
            && (unsigned __int8)sub_58180(v45, (__int64)ptr, &v28)
            && (!ptr[1] ? (v24 = s1) : (v24 = (const char *)ptr[0]),
                v25 = (*(__int64 (__fastcall **)(_DWORD *, const char *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v24, v28),
                v17 = 0,
                v25) )
          {
            v26 = 0;
            v17 = v25;
            v6 = v25;
          }
          else
          {
            v26 = 1;
          }
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            v30 = 0;
          }
          if ( v26 )
LABEL_92:
            v6 = v17;
LABEL_93:
          if ( *(_QWORD *)&v31[8] )
          {
            sub_5C790((__int64 *)&v31[8], 0);
            qfree(*(void **)&v31[8]);
            *(_QWORD *)&v31[8] = 0;
            *(_QWORD *)&v31[24] = 0;
          }
          goto LABEL_95;
        }
        if ( (__int64)s > 0 && (_QWORD)v37 )
        {
          if ( (__int64)v52 > 0 && (_QWORD)v53 )
          {
            if ( (_QWORD)v52 == (_QWORD)s )
              goto LABEL_23;
            sub_4FCD0((int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%"
                           "08llX), using the latter");
          }
          v53 = v37;
          v52 = s;
        }
LABEL_23:
        if ( 16LL * *(_QWORD *)&v31[8] )
        {
          v8 = *(_QWORD *)v31;
          v9 = 536920066;
          while ( 1 )
          {
            *(_OWORD *)ptr = 0;
            v30 = 0;
            v10 = *(_QWORD *)v8;
            if ( *(_QWORD *)v8 > 0x1Du || !_bittest64(&v9, v10) )
              break;
            sub_57CE0((__int64)v43, (__int64)ptr, (__int64 *)&v52, *(_DWORD *)(v8 + 8));
            v11 = (_QWORD *)(v8 + 8);
            v10 = *(_QWORD *)v8;
            if ( !ptr[1] )
              goto LABEL_30;
            v12 = (const char *)ptr[0];
LABEL_31:
            v13 = (*(__int64 (__fastcall **)(_DWORD *, unsigned __int64, const char *, _QWORD))(*(_QWORD *)a2 + 24LL))(
                    a2,
                    v10,
                    v12,
                    *v11);
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              v30 = 0;
            }
            if ( !v13 )
            {
              v8 += 16;
              if ( v8 != *(_QWORD *)v31 + 16LL * *(_QWORD *)&v31[8] )
                continue;
            }
            goto LABEL_35;
          }
          v11 = (_QWORD *)(v8 + 8);
LABEL_30:
          v12 = s1;
          goto LABEL_31;
        }
        goto LABEL_35;
      }
    }
LABEL_95:
    sub_4D700(v43);
    sub_A40F0();
    close_linput(v5);
    return v6;
  }
  return (unsigned int)-1;
}
// 155778: using guessed type __int64 qword_155778;
// 158B40: using guessed type __int64 under_debugger;
