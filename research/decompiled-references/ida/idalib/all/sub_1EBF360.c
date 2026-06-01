__int64 __fastcall sub_1EBF360(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  __int64 result; // rax
  int v7; // edx

  if ( *(_QWORD *)(a1 + 520) || !(unsigned __int8)sub_1EBF210(a1) )
  {
    v2 = (_QWORD *)operator new(0x50u);
    v3 = *(_QWORD *)(a1 + 520);
    v4 = v2;
    v2[1] = a1;
    v2[3] = 0;
    *v2 = &off_2BE47D8;
    LODWORD(v2) = *(_DWORD *)(a1 + 168);
    v4[4] = 0;
    *((_DWORD *)v4 + 4) = (_DWORD)v2;
    v4[5] = 0;
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    *((_BYTE *)v4 + 72) = 1;
    v5 = sub_1FD1850(v3);
    result = operator new(0x18u);
    *(_QWORD *)result = &off_2BE4800;
    *(_QWORD *)(result + 8) = v4;
    *(_QWORD *)(result + 16) = v5;
  }
  else
  {
    result = operator new(0x50u);
    *(_QWORD *)(result + 8) = a1;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)result = &off_2BE47D8;
    v7 = *(_DWORD *)(a1 + 168);
    *(_QWORD *)(result + 32) = 0;
    *(_DWORD *)(result + 16) = v7;
    *(_QWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 48) = 0;
    *(_QWORD *)(result + 56) = 0;
    *(_QWORD *)(result + 64) = 0;
    *(_BYTE *)(result + 72) = 0;
  }
  return result;
}
