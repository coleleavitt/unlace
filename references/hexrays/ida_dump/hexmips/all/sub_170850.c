__int64 __fastcall sub_170850(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned int v5; // ebx
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int8 *v13; // r9
  __int64 v14; // rdi
  __int64 (*v15)(); // rax
  int v16; // eax
  int v17; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-A0h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-90h] BYREF
  __int64 v22; // [rsp+50h] [rbp-80h] BYREF
  __int128 v23; // [rsp+58h] [rbp-78h]
  __int64 v24[2]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v25; // [rsp+80h] [rbp-50h] BYREF
  __int128 v26; // [rsp+88h] [rbp-48h]
  unsigned __int64 v27; // [rsp+98h] [rbp-38h]

  v3 = 0;
  v27 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = *(_DWORD *)(a3 + 72);
    v21[0] = 0;
    v21[1] = 0;
    v22 = 0;
    v23 = 0;
    sub_FFB60(a2, a1, (__int64)v21);
    if ( *(_QWORD *)(a2 + 8) <= 1u )
    {
      v17 = **(_DWORD **)a2;
      if ( !v17 || v5 == v17 )
        v3 = 0;
      else
        v3 = sub_16F520(a1, v5, a2, v21) ^ 1;
    }
    else
    {
      v20[1] = 0;
      v6 = 0;
      v20[0] = 0xFFFFFFFF00000000LL;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(a3 + 64);
        v9 = *(unsigned int *)(*(_QWORD *)a2 + 4 * v7);
        if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 64) )
        {
          if ( !under_debugger )
            sub_37E160(52719);
          BUG();
        }
        v10 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v9);
        v24[0] = 0;
        v24[1] = 0;
        v25 = 0;
        v11 = *(_QWORD *)(v10 + 56);
        v26 = 0;
        v12 = sub_124F50(v10, v21, v11, 0, v24, 0, 0x101u);
        if ( !v12 )
          break;
        if ( *(_DWORD *)v12 != 4 )
          break;
        if ( !(unsigned __int8)sub_60620(v21, v24) )
          break;
        if ( !(unsigned __int8)sub_3131C0(&v25, &v22) )
          break;
        v13 = (unsigned __int8 *)(v12 + 32);
        if ( (*(_BYTE *)(v12 + 32) & 0xF7) != 2 )
        {
          v14 = *(_QWORD *)(a1 + 920);
          v15 = *(__int64 (**)())(*(_QWORD *)v14 + 32LL);
          if ( v15 == sub_761D0 )
            break;
          v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v15)(v14, a1, v12 + 32, 0, 0);
          v13 = (unsigned __int8 *)(v12 + 32);
          if ( v16 != 2 )
            break;
        }
        if ( LOBYTE(v20[0]) )
        {
          if ( !sub_121960((unsigned __int8 *)v20, (__int64)v13, 0) )
            break;
        }
        else
        {
          sub_120F80((__int64)v20, v13);
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v25);
        }
        ++v6;
        qfree(v24[0]);
        v7 = v6;
        if ( (unsigned __int64)v6 >= *(_QWORD *)(a2 + 8) )
        {
          v3 = sub_16F520(a1, v5, a2, v21) ^ 1;
          goto LABEL_12;
        }
      }
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      v3 = 0;
      qfree(v24[0]);
LABEL_12:
      sub_118BA0((__int64)v20);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    qfree(v21[0]);
  }
  return v3;
}
