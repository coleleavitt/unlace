__int64 __fastcall sub_41B960(
        std::chrono::_V2::steady_clock *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        double a5)
{
  std::chrono::_V2::steady_clock *v6; // rbx
  __int64 v7; // r12
  const char *v8; // rsi
  std::ostream *v9; // r12
  _QWORD *v10; // r12
  __int64 v11; // rcx
  _QWORD *v12; // r13
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  int v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // ebp
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  _QWORD *v25; // rax
  std::ostream *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  unsigned int v31; // [rsp+Ch] [rbp-5Ch]
  unsigned int v32; // [rsp+10h] [rbp-58h]
  _BYTE v34[64]; // [rsp+28h] [rbp-40h] BYREF

  v6 = this;
  v31 = a2;
  if ( !*((_BYTE *)this + 40) )
  {
    v28 = std::chrono::_V2::steady_clock::now(this);
    *((_BYTE *)this + 40) = 1;
    *((_QWORD *)this + 3) = v28;
  }
  if ( (_DWORD)a2 == -1 )
  {
    v19 = 0;
LABEL_53:
    v27 = std::chrono::_V2::steady_clock::now(this);
    *((_BYTE *)v6 + 40) = 0;
    *((_QWORD *)v6 + 4) += v27 - *((_QWORD *)v6 + 3);
    return v19;
  }
  v7 = sub_180B150(this, a2);
  v8 = (const char *)((unsigned int)sub_180B130(this) != 0);
  sub_1841000(v34, v8, "spacer::context::propagate", v7);
  if ( a4 < a3 )
    a4 = a3;
  v32 = a4;
  if ( *((_BYTE *)this + 665) )
    sub_41B8D0((__int64)this);
  sub_3FFF30((__int64)this, v8, a5);
  if ( a4 < v31 )
  {
LABEL_46:
    if ( *((_BYTE *)v6 + 666) )
    {
LABEL_47:
      this = v6;
      sub_41B8D0((__int64)v6);
    }
LABEL_34:
    if ( (unsigned int)sub_180B130(this) )
    {
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v29 = sub_180B150(this, v8);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v29, "\n");
      }
      else
      {
        sub_180B150(this, v8);
        std::operator<<<std::char_traits<char>>();
      }
    }
    v19 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned int)sub_180B130(this) )
      {
        if ( (unsigned __int8)sub_186A530(a5) )
        {
          sub_186A4C0(a5);
          if ( a3 < v31 && a3 + 1 == v31 )
          {
            this = (std::chrono::_V2::steady_clock *)sub_180B150(this, v8);
            v8 = " ! ";
            std::operator<<<std::char_traits<char>>();
          }
          sub_180B150(this, v8);
          v8 = " ";
          v26 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::flush(v26);
          sub_186A500(v26, " ");
        }
        else
        {
          if ( a3 < v31 && a3 + 1 == v31 )
          {
            this = (std::chrono::_V2::steady_clock *)sub_180B150(this, v8);
            v8 = " ! ";
            std::operator<<<std::char_traits<char>>();
          }
          sub_180B150(this, v8);
          v8 = " ";
          v9 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::flush(v9);
        }
      }
      this = *((std::chrono::_V2::steady_clock **)v6 + 19);
      sub_EE4F40(this);
      v10 = *((_QWORD **)v6 + 33);
      v11 = 2LL * *((unsigned int *)v6 + 68);
      v12 = &v10[v11];
      if ( v10 == &v10[v11] )
        break;
      v13 = *((_QWORD **)v6 + 33);
      while ( 1 )
      {
        v14 = v13;
        if ( *v13 > 1u )
          break;
        v13 += 2;
        v14 = v13;
        if ( v12 == v13 )
          goto LABEL_39;
      }
      if ( v12 == v13 )
      {
LABEL_39:
        while ( v14 != v10 )
        {
          if ( *v10 > 1u )
          {
            while ( v14 != v10 )
            {
              sub_EE4F40(*((_QWORD *)v6 + 19));
              v8 = (const char *)v31;
              this = (std::chrono::_V2::steady_clock *)(v10[1] + 176LL);
              sub_410D40((__int64)this, v31, v21, v22, v23, v24);
              v25 = v10 + 2;
              if ( v14 == v10 + 2 )
                break;
              while ( 1 )
              {
                v10 = v25;
                if ( *v25 > 1u )
                  break;
                v25 += 2;
                if ( v14 == v25 )
                  goto LABEL_45;
              }
            }
            goto LABEL_45;
          }
          v10 += 2;
        }
        break;
      }
      v15 = 1;
      do
      {
        this = *((std::chrono::_V2::steady_clock **)v6 + 19);
        sub_EE4F40(this);
        v16 = v14[1];
        if ( !*(_BYTE *)(v16 + 212) )
        {
          this = (std::chrono::_V2::steady_clock *)(v16 + 176);
          sub_41A7B0(v16 + 176);
        }
        v17 = *(_QWORD *)(v16 + 192);
        if ( v17 && *(_DWORD *)(v17 - 4) )
        {
          v8 = (const char *)v31;
          this = (std::chrono::_V2::steady_clock *)(v16 + 176);
          v15 &= sub_410B20((__int64 *)(v16 + 176), v31);
        }
        v18 = v14 + 2;
        if ( v12 == v14 + 2 )
          break;
        while ( 1 )
        {
          v14 = v18;
          if ( *v18 > 1u )
            break;
          v18 += 2;
          if ( v12 == v18 )
            goto LABEL_31;
        }
      }
      while ( v12 != v18 );
LABEL_31:
      if ( (_BYTE)v15 )
      {
        v10 = *((_QWORD **)v6 + 33);
        v14 = &v10[2 * *((unsigned int *)v6 + 68)];
        goto LABEL_39;
      }
      if ( v32 < ++v31 )
      {
        if ( *((_BYTE *)v6 + 666) )
          goto LABEL_47;
        goto LABEL_34;
      }
    }
LABEL_45:
    if ( a3 < v31 )
      goto LABEL_46;
    *((_DWORD *)v6 + 91) = v31;
    if ( (unsigned int)sub_180B130(this) )
    {
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v30 = sub_180B150(this, v8);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v30, "\n");
      }
      else
      {
        sub_180B150(this, v8);
        std::operator<<<std::char_traits<char>>();
      }
    }
    v19 = 1;
  }
  this = (std::chrono::_V2::steady_clock *)v34;
  sub_18410E0(v34);
  if ( *((_BYTE *)v6 + 40) )
    goto LABEL_53;
  return v19;
}

