unsigned __int64 __fastcall sub_163850(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  void (*v11)(void); // rdx
  void (__fastcall *v12)(_QWORD); // rcx
  _QWORD *v13; // rdx
  const char *v14; // rsi
  struct _Unwind_Exception *v16; // rbx
  _BYTE v17[16]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+28h] [rbp-60h]
  const char *v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 984) == 0;
  v22 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v16 = (struct _Unwind_Exception *)sub_1582F0(a1);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      _Unwind_Resume(v16);
    }
    v3 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v3 = *(_QWORD *)(a1 + 848);
  }
  if ( *(_BYTE *)(v3 + 21) )
  {
    if ( unk_2440C5 )
    {
      v4 = *(_QWORD *)(a1 + 600);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 592);
        v6 = v5 + 72 * v4;
        if ( v5 != v6 )
        {
          v7 = *(_QWORD *)(a1 + 592);
          while ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
          {
            v7 += 72;
            if ( v6 == v7 )
              return v22 - __readfsqword(0x28u);
          }
          if ( v7 )
          {
            do
            {
              if ( v5 != v7 && (*(_BYTE *)(v5 + 64) & 4) == 0 )
              {
                if ( v5 )
                {
                  if ( *(_QWORD *)(v5 + 16) > 1u )
                  {
                    sub_15B720(v5, "", 0);
                    v8 = *(_QWORD **)(a1 + 632);
                    while ( (_QWORD *)(a1 + 632) != v8 )
                    {
                      v9 = v8;
                      v8 = (_QWORD *)*v8;
                      v10 = (_QWORD *)v9[2];
                      v11 = *(void (**)(void))(*v10 + 24LL);
                      if ( (char *)v11 == (char *)sub_157D60 )
                      {
                        v12 = (void (__fastcall *)(_QWORD))v10[2];
                        v13 = (_QWORD *)(v10[1] + v10[3]);
                        if ( ((unsigned __int8)v12 & 1) != 0 )
                          v12 = *(void (__fastcall **)(_QWORD))((char *)v12 + *v13 - 1);
                        v12(v13);
                      }
                      else
                      {
                        v11();
                      }
                    }
                  }
                }
              }
              v5 += 72;
            }
            while ( v6 != v5 );
            v20 = nullptr;
            v21 = 0;
            if ( sub_163660(a1, (__int64)&v20) <= 0 )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1) )
                sub_15BB50(a1 + 592, v7);
            }
            else
            {
              v14 = s1;
              if ( (_QWORD)v21 )
                v14 = v20;
              sub_15C210((__int64 *)(a1 + 592), (__int64)v14, 0);
              v18 = 0;
              v19 = 0;
              sub_161120(a1, (__int64)v17, (__int64)&v18, nullptr);
            }
            if ( v20 )
            {
              *(_QWORD *)&v21 = 0;
              qfree();
            }
          }
        }
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}

