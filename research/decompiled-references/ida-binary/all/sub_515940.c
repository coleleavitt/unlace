unsigned __int64 __fastcall sub_515940(QT::QAbstractScrollArea *this, double a2, double a3)
{
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  __int64 i; // rax
  const char *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  bool v10; // zf
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  const char *v13; // rdi
  size_t v15; // r14
  const char *v16; // rax
  const char *v17; // r12
  const char *v18; // rdi
  int v19; // r12d
  const char *v20; // rdi
  int v21; // r12d
  __int64 v22; // rdi
  void *v23; // rdi
  int v24[2]; // [rsp+0h] [rbp-58h] BYREF
  const char *v25; // [rsp+8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int128 v27; // [rsp+18h] [rbp-40h]
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v3 = *((_DWORD *)this + 36);
  if ( v3 != -1 )
  {
    v4 = *((_DWORD *)this + 37);
    if ( v4 != -1 )
    {
      for ( i = v4; (unsigned __int64)v4 < *((_QWORD *)this + 8); i = ++v4 )
      {
        v9 = 48 * i;
        v10 = *((_QWORD *)this + 7) + v9 == 0;
        v11 = (_QWORD *)(*((_QWORD *)this + 7) + v9);
        v12 = v11;
        if ( v10 )
          break;
        v25 = sub_511DC0(v11, nullptr);
        v13 = v25;
        if ( v3 )
        {
          skip_utf8(&v25, v3);
          v13 = v25;
        }
        v7 = &s1;
        if ( *((_QWORD *)this + 16) )
          v7 = *((const char **)this + 15);
        v8 = stristr(v13, v7);
        if ( v8 )
        {
          v15 = v8 - (_QWORD)sub_511DC0(v12, nullptr);
          v16 = sub_511DC0(v12, nullptr);
          v26 = 0;
          v17 = v16;
          v27 = 0;
          if ( !v15 )
            goto LABEL_15;
          v23 = nullptr;
          if ( v15 != -1 )
          {
            v26 = qvector_reserve(&v26, 0, v15 + 1, 1);
            v23 = (void *)v26;
          }
          *(_QWORD *)&v27 = v15 + 1;
          memmove(v23, v17, v15);
          *(_BYTE *)(v26 + v15) = 0;
          if ( (_QWORD)v27 )
            v18 = (const char *)v26;
          else
LABEL_15:
            v18 = &s1;
          v24[0] = qustrlen(v18);
          v19 = v24[0];
          v24[1] = v4;
          sub_514C10(this, v24, 0, 0, 0.0, a3);
          v20 = &s1;
          if ( *((_QWORD *)this + 16) )
            v20 = *((const char **)this + 15);
          v21 = qustrlen(v20) + v19;
          v24[0] = v21;
          sub_514C10(this, v24, 1, 1, 0.0, a3);
          v22 = v26;
          *((_DWORD *)this + 36) = v21;
          *((_DWORD *)this + 37) = v4;
          if ( v22 )
          {
            *(_QWORD *)&v27 = 0;
            qfree(v22, (const char *)v24);
          }
          return v28 - __readfsqword(0x28u);
        }
        v3 = 0;
      }
      *((_QWORD *)this + 18) = -1;
    }
  }
  return v28 - __readfsqword(0x28u);
}
