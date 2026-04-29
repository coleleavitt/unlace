__int64 __fastcall sub_6AB10(__int64 *a1, __int64 *a2, int a3, char a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 (**v11)(); // rax
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // ebp
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 *v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  v25 = qvector_reserve(&v25, 0, 1, 4);
  v24 = a1 + 1;
  *(_DWORD *)(v25 + 4 * v26) = a3;
  v8 = v25;
  v9 = v26 + 1;
  *(_QWORD *)&v26 = v9;
  if ( !v9 )
  {
LABEL_17:
    v20 = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(v8 + 4 * v9 - 4);
    *(_QWORD *)&v26 = v9 - 1;
    if ( !(unsigned __int8)sub_5F710(v24, v10) )
      goto LABEL_16;
    v11 = (__int64 (**)())*a1;
    *((_BYTE *)a1 + 24) = 0;
    v12 = *v11;
    if ( v12 == sub_605A0 )
      goto LABEL_4;
    v20 = ((__int64 (__fastcall *)(__int64 *, _QWORD))v12)(a1, v10);
    if ( v20 )
      break;
    if ( !*((_BYTE *)a1 + 24) )
    {
LABEL_4:
      v13 = *a2;
      if ( a4 )
        v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v13 + 104))(a2, v10);
      else
        v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v13 + 96))(a2, v10);
      v15 = v14 - 1;
      if ( v14 - 1 >= 0 )
      {
        do
        {
          v19 = *a2;
          if ( a4 )
            v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v19 + 120))(a2, v10, v15);
          else
            v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v19 + 112))(a2, v10, v15);
          v17 = v16;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 8))(a1, v10, v16)
            && !sub_5FEB0(v24, v17) )
          {
            v22 = v26;
            v23 = v25;
            if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
            {
              v25 = qvector_reserve(&v25, v25, v26 + 1, 4);
              v23 = v25;
              v22 = v26;
            }
            *(_DWORD *)(v23 + 4 * v22) = v17;
            *(_QWORD *)&v26 = v26 + 1;
          }
        }
        while ( v15-- != 0 );
      }
    }
LABEL_16:
    v9 = v26;
    v8 = v25;
    if ( !(_QWORD)v26 )
      goto LABEL_17;
  }
  v8 = v25;
LABEL_18:
  if ( v8 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v8);
  }
  return v20;
}
