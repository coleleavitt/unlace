__int64 __fastcall sub_9E43C0(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // r13
  _DWORD *v5; // rax
  int *v6; // rbx
  void *v7; // r14
  __int64 v8; // r15
  int v9; // r12d
  unsigned int i; // r12d
  unsigned int v11; // esi
  unsigned int v12; // [rsp+4h] [rbp-A4h]
  __int64 v13; // [rsp+8h] [rbp-A0h]
  int *v15; // [rsp+18h] [rbp-90h]
  int v16; // [rsp+28h] [rbp-80h] BYREF
  int v17; // [rsp+2Ch] [rbp-7Ch] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+3Ch] [rbp-6Ch]
  _QWORD v21[2]; // [rsp+50h] [rbp-58h] BYREF
  int v22; // [rsp+60h] [rbp-48h]

  result = a1[87];
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      v3 = (_DWORD *)sub_186B270(0x40u);
      v20 = 0;
      v3[1] = 0x80000000;
      v4 = v3;
      v3[3] = 0x80000000;
      v3[5] = 0x80000000;
      v3[7] = 0x80000000;
      v3[9] = 0x80000000;
      v3[11] = 0x80000000;
      v3[13] = 0x80000000;
      v3[15] = 0x80000000;
      v5 = (_DWORD *)sub_186B270(0x40u);
      v6 = (int *)a1[87];
      v5[1] = 0x80000000;
      v7 = v5;
      v5[3] = 0x80000000;
      v5[5] = 0x80000000;
      v5[7] = 0x80000000;
      v5[9] = 0x80000000;
      v5[11] = 0x80000000;
      v5[13] = 0x80000000;
      v5[15] = 0x80000000;
      v21[1] = 8;
      v22 = 0;
      if ( !v6 || (v15 = &v6[*(v6 - 1)], v15 == v6) )
      {
        v12 = 8;
        result = *a2;
        if ( !*a2 )
        {
          sub_186B220(v7);
          return sub_186B220(v4);
        }
      }
      else
      {
        v12 = 8;
        do
        {
          while ( 1 )
          {
            v8 = a1[2];
            v9 = *v6;
            v13 = **(_QWORD **)(a1[4] + 8LL * (unsigned int)*v6);
            if ( !(unsigned int)sub_8E7030(v8)
              || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 7488) + 56LL))(
                   *(_QWORD *)(v8 + 7488),
                   v13) )
            {
              v16 = v9;
              if ( !sub_98B080(v4, v12, v9) )
                break;
            }
            if ( v15 == ++v6 )
              goto LABEL_11;
          }
          v17 = v9;
          v18 = v4;
          v19 = v12;
          sub_9E1E20((__int64)&v18, &v17);
          v4 = v18;
          v12 = v19;
          sub_98D100(a2, (unsigned int *)&v16);
          ++v6;
        }
        while ( v15 != v6 );
LABEL_11:
        result = *a2;
        if ( !*a2 )
          goto LABEL_16;
      }
      for ( i = 0; i < *(_DWORD *)(result - 4); v12 = v19 )
      {
        v11 = *(_DWORD *)(result + 4LL * i);
        v18 = v4;
        v21[0] = v7;
        v19 = v12;
        sub_9E3960((__int64)a1, v11, a2, (__int64)&v18, (__int64)v21);
        v4 = v18;
        ++i;
        v7 = (void *)v21[0];
        result = *a2;
        if ( !*a2 )
          break;
      }
      if ( !v7 )
      {
LABEL_17:
        if ( !v4 )
          return result;
        return sub_186B220(v4);
      }
LABEL_16:
      result = sub_186B220(v7);
      goto LABEL_17;
    }
  }
  return result;
}

