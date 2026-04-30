__int64 __fastcall worklists_revert_action_t__::vfunc_0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // edx
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 (__fastcall *v8)(_QWORD *, __int64, unsigned int); // rax
  __int64 v9; // rdi
  __int64 (*v10)(); // rax
  const char *v11; // rbp
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  int v25; // eax
  QT::QAbstractItemView *v26; // rdi
  __int64 v27; // rbx
  const char *v28; // rdx
  const char *v29; // rdx
  __int64 v30; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+18h] [rbp-A0h]
  const char *v34; // [rsp+30h] [rbp-88h] BYREF
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+50h] [rbp-68h] BYREF
  __int128 v37; // [rsp+58h] [rbp-60h]
  int v38; // [rsp+68h] [rbp-50h]
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v33 = 0;
  v32 = 0;
  v32 = qvector_reserve(&v32, 0, 1, 24);
  v4 = v32 + 24 * v33;
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  v5 = *(_DWORD *)(a2 + 84);
  *(_QWORD *)&v33 = v33 + 1;
  sub_169A50((__int64 *)v4, (__int64)"@%d", v5);
  v6 = sub_426230(v4, "@%d");
  v7 = (_QWORD *)sub_417080((__int64)v6);
  v8 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v7 + 360LL);
  if ( v8 == sub_418FE0 )
  {
    v9 = v7[1];
    if ( !v9 || (v10 = *(__int64 (**)())(*(_QWORD *)v9 + 480LL), v10 != sub_178B60) && (unsigned __int8)v10() )
    {
      LODWORD(v11) = 52;
      goto LABEL_23;
    }
    v36 = 0;
    v37 = 0;
    v11 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)v7[1] + 328LL))(
                          v7[1],
                          &v36,
                          &v32,
                          1);
    v12 = v11;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v7 + 24LL))(v7, v11, &v36);
    v13 = v36;
    if ( v36 )
    {
      v14 = v37;
      if ( (_QWORD)v37 )
      {
        v15 = 0;
        do
        {
          v16 = v13 + 32 * v15;
          v17 = *(_QWORD *)(v16 + 8);
          if ( v17 )
          {
            *(_QWORD *)(v16 + 16) = 0;
            qfree(v17, v11);
            v13 = v36;
          }
          ++v15;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v13, v11);
    }
  }
  else
  {
    v12 = (const char *)&v32;
    LODWORD(v11) = v8(v7, (__int64)&v32, 1u);
  }
  if ( (_DWORD)v11 )
  {
LABEL_23:
    v12 = "Failed to revert files for worklist %d";
    sub_416980((unsigned int)v11, (__int64)"Failed to revert files for worklist %d", *(_DWORD *)(a2 + 84));
    v18 = 0;
    goto LABEL_13;
  }
  v18 = *(unsigned __int8 *)(a1 + 8);
  if ( !(_BYTE)v18 )
  {
    v25 = *(_DWORD *)(a2 + 84);
    v26 = *(QT::QAbstractItemView **)(a1 + 16);
    v12 = (const char *)&v30;
    v37 = 0;
    v36 = 0;
    v38 = v25;
    if ( !(unsigned int)sub_449270(v26, &v30, (__int64)&v36, 1) )
    {
      v27 = v30;
      v12 = *(const char **)(v30 + 8);
      if ( v12 )
      {
        if ( *(_BYTE *)(a1 + 9) )
        {
          v18 = *(unsigned __int8 *)(a1 + 8);
          v31 = v30;
          if ( (_BYTE)v18 )
          {
LABEL_28:
            v18 = sub_443870(*(__int64 **)v27, (__int64)v12, v18);
            goto LABEL_13;
          }
          sub_447E60((__int64)&v34, (__int64)&v31);
          v28 = &s1;
          if ( v35 )
            v28 = v34;
          v12 = "HIDECANCEL\nDo you really want to revert these files?\n%s";
          if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to revert these files?\n%s", v28) == 1 )
          {
            if ( v34 )
            {
              v35 = 0;
              qfree(v34, "HIDECANCEL\nDo you really want to revert these files?\n%s", v29);
            }
            v12 = *(const char **)(v27 + 8);
            if ( v12 )
            {
              LOBYTE(v18) = *(_BYTE *)(a1 + 8);
              goto LABEL_28;
            }
          }
          else if ( v34 )
          {
            v35 = 0;
            qfree(v34, "HIDECANCEL\nDo you really want to revert these files?\n%s", v29);
          }
        }
        else
        {
          v18 = sub_443870(*(__int64 **)v30, (__int64)v12, 0);
        }
      }
      else
      {
        v18 = 1;
      }
    }
  }
LABEL_13:
  v19 = v32;
  if ( v32 )
  {
    v20 = v33;
    if ( (_QWORD)v33 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, v12);
          v19 = v32;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v19, v12);
  }
  return v18;
}
