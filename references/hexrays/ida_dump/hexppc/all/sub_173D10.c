__int64 __fastcall sub_173D10(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rbp
  _QWORD v9[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-98h]
  __int64 v11; // [rsp+18h] [rbp-90h]
  _QWORD v12[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  char v16; // [rsp+58h] [rbp-50h]
  unsigned __int8 *v17; // [rsp+60h] [rbp-48h]
  _QWORD *v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+70h] [rbp-38h]
  char v20; // [rsp+74h] [rbp-34h]
  unsigned __int64 v21; // [rsp+78h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  sub_120C40((__int64)v9, a1, (__int64)a3, 0);
  v12[1] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = v9;
  v4 = *(_DWORD *)a3 == 8;
  v17 = a3;
  v19 = 0;
  v20 = 0;
  v13 = a1;
  v12[0] = &off_4CB000;
  if ( !v4
    && (LOBYTE(v5) = sub_122150(a3, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int *)a2, 0),
        v6 = v5,
        (_BYTE)v5)
    && *((_DWORD *)v17 + 17) == *(_DWORD *)(a2 + 68) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v13 + 64) + 1504LL);
    sub_121740(a2 + 32, v17 + 64);
    sub_16F140(v8, a2);
  }
  else
  {
    v19 = 0;
    v6 = 0;
    if ( !(unsigned int)sub_11AEC0((_BYTE *)a2, (__int64)v12) )
      LOBYTE(v6) = v19 > 0;
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  qfree(v9[0]);
  return v6;
}
