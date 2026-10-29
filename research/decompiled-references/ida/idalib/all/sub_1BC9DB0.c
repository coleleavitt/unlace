__int64 __fastcall sub_1BC9DB0(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v5; // r12
  _QWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r13
  __int64 v11; // r14
  __int64 result; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  int v20; // edx
  unsigned int v21; // r15d
  unsigned int v22; // r14d
  int v23; // r13d
  __int64 v24; // rdx
  unsigned __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  bool v29; // dl

  if ( a3 )
  {
    if ( a2 )
    {
      if ( a3 == (_QWORD *)a2 )
        return 1;
      v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
      if ( v5 == (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 32LL))(a3) )
        return 1;
    }
  }
  v6 = (_QWORD *)sub_B77AF0((__int64)a2);
  v7 = sub_B77AF0((__int64)a3);
  v10 = (_QWORD *)v7;
  if ( v6 )
  {
    if ( v7 )
    {
      if ( v6 == (_QWORD *)v7 )
        return 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
      if ( v11 == (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 32LL))(v10) )
        return 1;
      v13 = *(_QWORD *)sub_BC3640(v10) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = *(_QWORD *)sub_BC3640(v6) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 )
      {
        if ( v14 )
        {
          if ( v14 == v13 )
            return 1;
          v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 32LL))(v14);
          if ( v15 == (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 32LL))(v13) )
            return 1;
        }
      }
    }
  }
  v16 = sub_B76070((__int64)a2, (__int64)a2, v8, v9);
  v17 = (a2[28] & 0x7Fu) - 35;
  v19 = v16 + ((unsigned int)v17 <= 3);
  v20 = sub_B76070((__int64)a3, v19, v17, v18) + ((*((_BYTE *)a3 + 28) & 0x7Fu) - 35 <= 3);
  result = 0;
  if ( v19 == v20 )
  {
    if ( v19 )
    {
      v21 = 0;
      v22 = 0;
      v23 = 0;
      while ( !v23 )
      {
        if ( ((a2[28] + 93) & 0x7Fu) <= 2 )
        {
          v25 = 0;
          if ( !sub_B979F0(a2) )
            v25 = sub_B987D0(a2, v19);
        }
        else
        {
          v28 = v22++;
          v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 15) + 8 * v28) + 48LL);
        }
        if ( ((*((_BYTE *)a3 + 28) + 93) & 0x7Fu) > 2 )
          goto LABEL_19;
        v29 = sub_B979F0(a3);
        v27 = 0;
        if ( !v29 )
          v27 = sub_B987D0(a3, v19);
LABEL_20:
        if ( *(_QWORD *)(*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
          return 0;
        if ( v19 == ++v23 )
          return 1;
      }
      v24 = v22++;
      v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 15) + 8 * v24) + 48LL);
LABEL_19:
      v26 = v21++;
      v27 = *(_QWORD *)(*(_QWORD *)(a3[15] + 8 * v26) + 48LL);
      goto LABEL_20;
    }
    return 1;
  }
  return result;
}
