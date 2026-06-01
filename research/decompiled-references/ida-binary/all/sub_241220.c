unsigned __int64 __fastcall sub_241220(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _BYTE *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  char *v10; // rcx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 *v27; // [rsp+8h] [rbp-70h]
  _QWORD *v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 eah; // [rsp+18h] [rbp-60h]
  __int128 v31; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  eah = get_eah(a1, a2, a3);
  v6 = (_BYTE *)dbg;
  if ( *(int *)(dbg + 64) > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( dword_8BA594 == (_DWORD)v7 )
        goto LABEL_38;
      if ( (v7 & 0x80000000) != 0LL )
        goto LABEL_38;
      if ( v7 >= (unsigned __int64)xmmword_8CC398 )
        goto LABEL_38;
      v8 = qword_8CC390 + 56 * v7;
      if ( !v8 || !(unsigned __int8)sub_235DE0(v8) )
        goto LABEL_38;
      v10 = (char *)(unsigned int)v7;
      if ( !a1 )
        break;
      v11 = *(_QWORD *)(a1 + 32 * v7 + 8);
      if ( v6 )
      {
        if ( (v6[37] & 0x40) != 0 )
        {
          v12 = qword_8CC600;
          if ( qword_8CC600 )
          {
            *(_QWORD *)qword_8CC600 = v11;
            v6 = byte_9 + 2;
            v12[1] = a1;
            *((_DWORD *)v12 + 4) = v7;
            v13 = sub_23D480((__int64)v12, 11, v9, (char *)(unsigned int)v7, a4);
            v10 = (char *)(unsigned int)v7;
            if ( v13 != 1 )
              break;
            v11 = *(_QWORD *)qword_8CC600;
          }
        }
      }
LABEL_14:
      if ( !a2 )
        goto LABEL_44;
      v9 = dbg;
      v14 = *(_QWORD *)(a2 + 32 * v7 + 8);
      if ( dbg )
      {
        if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
        {
          v15 = qword_8CC600;
          if ( qword_8CC600 )
          {
            *(_QWORD *)qword_8CC600 = v14;
            v6 = byte_9 + 2;
            v15[1] = a2;
            *((_DWORD *)v15 + 4) = (_DWORD)v10;
            v9 = (unsigned int)sub_23D480((__int64)v15, 11, v9, v10, a4);
            v14 = -1;
            if ( (_DWORD)v9 == 1 )
              v14 = *(_QWORD *)qword_8CC600;
          }
        }
      }
      if ( v11 != v14 )
      {
LABEL_44:
        if ( (*(_QWORD *)(eah + 16) < v11 || (unsigned __int8)is_mapped(v11)) && v7 < (unsigned __int64)xmmword_8CC398 )
        {
          v16 = (_QWORD *)(qword_8CC390 + 56 * v7);
          if ( v16 )
          {
            v17 = qword_8CB508;
            if ( !qword_8CB508 )
            {
              v26 = operator new(0x18u);
              a4 = 0.0;
              *(_QWORD *)v26 = 0;
              v17 = v26;
              *(_OWORD *)(v26 + 8) = 0;
              qword_8CB508 = v26;
            }
            if ( v16[1] )
              goto LABEL_30;
            while ( 1 )
            {
              if ( under_debugger )
                BUG();
              interr(1716, v6, v9, v17, a4);
LABEL_30:
              v6 = (_BYTE *)*v16;
              if ( *(_BYTE *)*v16 )
              {
                a4 = 0.0;
                v27 = (__int64 *)v17;
                v31 = 0;
                qstrncpy(&v31, v6, 16);
                v18 = sub_1E78C0(v27, &v31);
                v19 = (_QWORD *)v18;
                if ( v18 )
                {
                  v20 = *(_QWORD *)(v18 + 8);
                  if ( (int)v20 > 0 )
                  {
                    v21 = 0;
                    v22 = 16 * ((unsigned int)(v20 - 1) + 1LL);
                    while ( 1 )
                    {
                      v23 = v21 + *v19;
                      if ( !*(_BYTE *)v23 )
                      {
                        v29 = v22;
                        v28 = v19;
                        v24 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87BDA0, *(const QT::QObject **)(v23 + 8));
                        v19 = v28;
                        v22 = v29;
                        if ( v24 )
                          break;
                      }
                      v21 += 16;
                      if ( v21 == v22 )
                        goto LABEL_38;
                    }
                    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 1104LL))(
                      v24,
                      v11,
                      0,
                      0);
                  }
                }
                break;
              }
            }
          }
        }
      }
LABEL_38:
      v6 = (_BYTE *)dbg;
      if ( *(_DWORD *)(dbg + 64) <= (int)++v7 )
        return v32 - __readfsqword(0x28u);
    }
    v11 = -1;
    goto LABEL_14;
  }
  return v32 - __readfsqword(0x28u);
}
