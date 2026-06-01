__int64 __fastcall sub_9E2AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  unsigned __int8 v12; // [rsp+Fh] [rbp-29h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  result = sub_9E26A0(a1, a2, v4);
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(v4 + 24);
    if ( !*(_DWORD *)(v4 + 48) )
    {
      if ( !v6 )
      {
        v7 = 64;
        goto LABEL_6;
      }
      if ( !*(_DWORD *)(v4 + 32) )
      {
        v7 = *(_QWORD *)(v6 + 32);
        goto LABEL_6;
      }
      v12 = result;
      sub_A1DB00(v4);
      sub_A1C490(v4);
      v6 = *(_QWORD *)(v4 + 24);
      result = v12;
      if ( !*(_DWORD *)(v4 + 48) )
      {
        v7 = *(_QWORD *)(v6 + 32);
        v11 = *(unsigned int *)(v4 + 32);
        if ( *(_DWORD *)(v7 + 16) != (_DWORD)v11 && (_DWORD)v11 )
          v7 = *(_QWORD *)(v6 + v11 + 32);
LABEL_6:
        v8 = *(_QWORD *)v4;
        if ( *(_BYTE *)(v7 + 51) )
        {
          v9 = *(unsigned int *)(v4 + 32);
          v10 = (_QWORD *)(v6 + v9 + 72);
          if ( v9 == v8 )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v8 = *(_QWORD *)v4;
LABEL_11:
    v10 = (_QWORD *)(v6 + v8 + 40);
LABEL_12:
    *v10 = v3;
  }
  return result;
}

