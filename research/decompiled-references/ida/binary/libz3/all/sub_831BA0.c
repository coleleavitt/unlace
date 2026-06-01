__int64 __fastcall sub_831BA0(_QWORD *a1, _DWORD *a2)
{
  char v2; // r8
  char v3; // bp
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned int *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]
  unsigned int *v12; // [rsp+10h] [rbp-38h] BYREF
  int v13[2]; // [rsp+18h] [rbp-30h]

  switch ( *a2 )
  {
    case 0xFFFFFFFE:
      v2 = 0;
      v3 = 0;
      goto LABEL_3;
    case 0xFFFFFFFF:
      v2 = 1;
      v3 = 1;
      goto LABEL_3;
    case 0:
      return sub_830800(a1, (__int64)(a2 + 2), (__int64)(a2 + 10));
    case 1:
      v2 = 0;
      v3 = 1;
      goto LABEL_3;
    case 2:
      v2 = 1;
      v3 = 0;
LABEL_3:
      v4 = a1[10];
      sub_831AF0((__int64 *)&v12, a1, (__int64)(a2 + 2), (__int64)(a2 + 10), v2);
      v5 = *(_QWORD *)(v4 + 1720);
      if ( !v5 || (v6 = v12, v7 = *v12, (unsigned int)v7 >= *(_DWORD *)(v5 - 4)) )
        BUG();
      v8 = *(_QWORD *)v13;
      result = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7) + 28LL));
      if ( v12[2]-- == 1 )
      {
        v11 = result;
        sub_15D7BC0(v8, v6);
        result = v11;
      }
      if ( v3 )
        return (unsigned int)result ^ 1;
      return result;
    case 3:
      LODWORD(result) = sub_830800(a1, (__int64)(a2 + 2), (__int64)(a2 + 10));
      return (unsigned int)result ^ 1;
    default:
      sub_1872CE0("");
      sub_1873130(114, 1486);
  }
}

