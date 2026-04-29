__int64 __fastcall sub_112B10(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v5; // r13
  bool v6; // zf
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v13[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (_QWORD *)(a4 + 48);
  v5 = a4 + 32;
  v6 = *(_BYTE *)(a4 + 32) == 4;
  v13[3] = __readfsqword(0x28u);
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  if ( v6 && **(_DWORD **)(a4 + 40) == 9 && (unsigned __int8)sub_11FD80(a4 + 48, &v12, 0) && !v12 )
  {
    v10 = *(_QWORD *)(a4 + 40);
    v5 = v10 + 32;
    sub_120A10(v13, *a1, 0, *(unsigned int *)(v10 + 36), **(_QWORD **)(a4 + 56), 0);
    v4 = v13;
  }
  if ( (unsigned int)sub_111200(a3, a1[1], v5, a1[1] + 32LL, 34)
    && (unsigned int)sub_111200(a3, a1[1], (__int64)v4, a1[1] + 48LL, 34) )
  {
    *a2 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)sub_111200(a3, a1[1], (__int64)v4, a1[1] + 32LL, 34)
    && (unsigned int)sub_111200(a3, a1[1], v5, a1[1] + 48LL, 34) )
  {
    *a2 = 1;
LABEL_9:
    v8 = 1;
    goto LABEL_6;
  }
  v8 = 0;
LABEL_6:
  sub_11CDA0(v13);
  return v8;
}
