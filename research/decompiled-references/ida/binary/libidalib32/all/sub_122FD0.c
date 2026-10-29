__int64 __fastcall sub_122FD0(double a1)
{
  char v1; // bp
  unsigned int *v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rax
  int v5; // r9d
  _DWORD *v6; // rbx
  int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rdi
  const char *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r14
  __int16 v15; // [rsp+2h] [rbp-56h] BYREF
  unsigned int v16; // [rsp+4h] [rbp-54h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-50h] BYREF
  int v18; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v15 = 3;
  v1 = sub_161360(0, &v16, &v17);
  if ( v1 )
  {
    v13 = getseg();
    if ( v13 == get_first_seg() )
    {
      v14 = getseg();
      if ( v14 == get_last_seg() )
      {
        sub_122E80(a1);
        return 1;
      }
    }
  }
  else
  {
    v16 = qword_251700;
    v17 = qword_251700;
  }
  v2 = (unsigned int *)getseg();
  if ( v2 )
    v16 = *v2;
  v3 = getseg();
  if ( v3 )
    v17 = *(_DWORD *)(v3 + 4);
  v4 = (_DWORD *)getseg();
  v6 = v4;
  if ( v4 )
  {
    v18 = *v4;
    if ( !v1 )
    {
      a1 = 0.0;
      v19 = 0;
      v20 = 0;
      get_segm_name();
      v12 = s1;
      if ( (_QWORD)v20 )
        LODWORD(v12) = v19;
      if ( !(unsigned int)sub_18BA90(1026, (_DWORD)v12, (_DWORD)v6, (int)v6 + 4, (unsigned int)&v18, (unsigned int)&v15) )
      {
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
        return 1;
      }
      v7 = v18 - *v6;
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      goto LABEL_11;
    }
    if ( (unsigned int)sub_18BA90(
                         1027,
                         (unsigned int)&v16,
                         (unsigned int)&v17,
                         (unsigned int)&v18,
                         (unsigned int)&v15,
                         v5) )
    {
      v7 = v18 - *v6;
LABEL_11:
      v8 = v17;
      v9 = v16;
      v10 = v16;
      if ( sub_121C70(v16, v17, v7, a1) )
      {
        v10 = v9;
        sub_121AD0(v9, v8, v7);
      }
      sub_15D870(v10);
    }
    return 1;
  }
  return 0;
}

