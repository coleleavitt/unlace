__int64 __fastcall sub_4344A0(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 (*v8)(); // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  __int128 v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v3 = *a1;
  v29 = __readfsqword(0x28u);
  v27 = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(v3 + 296);
  v28 = 0;
  if ( v5 == vault_with_events_t__::vfunc_37 )
  {
    v6 = (__int64 *)a1[1];
    if ( v6 )
    {
      v7 = *v6;
      v8 = *(__int64 (**)())(*v6 + 480);
      if ( v8 == sub_178B60 )
      {
LABEL_4:
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _QWORD))(v7 + 264))(v6, &v27, 0, 0, a2);
        goto LABEL_5;
      }
      if ( !(unsigned __int8)v8() )
      {
        v6 = (__int64 *)a1[1];
        v7 = *v6;
        goto LABEL_4;
      }
    }
    v9 = 52;
    goto LABEL_23;
  }
  v9 = ((__int64 (__fastcall *)(__int64 *, __int64 *, _QWORD, _QWORD, _QWORD))v5)(a1, &v27, 0, 0, a2);
LABEL_5:
  if ( v9 )
  {
LABEL_23:
    v12 = "Failed to retrieve worklist #%d";
    sub_416980(v9, (__int64)"Failed to retrieve worklist #%d", a2);
    v17 = 0;
    goto LABEL_9;
  }
  if ( (_QWORD)v28 != 1 || *(_DWORD *)(v27 + 84) != a2 )
  {
    if ( !under_debugger )
      interr(80099, &v27, v10, v11, 0.0);
    BUG();
  }
  v12 = (_BYTE *)(&dword_0 + 3);
  sub_44EFF0(v27, 3, 1);
  v17 = 1;
LABEL_9:
  v18 = v27;
  if ( v27 )
  {
    v19 = v28;
    if ( (_QWORD)v28 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v18 + v20);
        v23 = *(_QWORD *)(v18 + v20 + 48);
        if ( v23 )
        {
          v22[7] = 0;
          qfree(v23, v12);
        }
        v24 = v22[3];
        if ( v24 )
        {
          v22[4] = 0;
          qfree(v24, v12);
        }
        v25 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v25, v12);
        }
        ++v21;
        v18 = v27;
        v20 += 88;
      }
      while ( v19 != v21 );
    }
    qfree(v18, v12, v13, v14, v15, v16, v27, 0, *((_QWORD *)&v28 + 1), v29);
  }
  return v17;
}
