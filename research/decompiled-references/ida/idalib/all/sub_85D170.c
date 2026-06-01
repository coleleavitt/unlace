int *__fastcall sub_85D170(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5,
        __int64 a6)
{
  unsigned __int8 *v7; // rdx
  int v11; // eax
  int v12; // r8d
  int v13; // edi
  int *v14; // rdx
  unsigned __int8 *v15; // rbx
  int v16; // eax
  unsigned __int8 *v17; // rcx
  int v18; // edx
  int *result; // rax
  int v21; // [rsp+18h] [rbp-60h] BYREF
  int v22; // [rsp+1Ch] [rbp-5Ch] BYREF
  unsigned __int8 *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 *v24; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = *a1;
  v25[1] = __readfsqword(0x28u);
  v24 = v7;
  if ( v7 < a2 && *v7 == 40 )
  {
    while ( 1 )
    {
      v15 = &(++v7)[-*(_QWORD *)(a6 + 56)];
      v24 = v7;
      v23 = v15;
      if ( v7 >= a2 )
      {
LABEL_25:
        *a5 = 217;
        goto LABEL_22;
      }
      v16 = sub_856140(&v24, a2, *(_DWORD *)(a6 + 236), 0xFFFFu, 161, (unsigned int *)&v22, a5);
      v7 = v24;
      v17 = v24;
      if ( v16 )
      {
        v11 = v22;
        if ( v22 <= 0 )
        {
          *a5 = 115;
          goto LABEL_22;
        }
        v21 = v22;
        v12 = -2145845248;
        v13 = (int)v15;
        if ( !a4 )
          goto LABEL_20;
      }
      else
      {
        if ( *a5 )
          goto LABEL_22;
        if ( *v24 == 60 )
        {
          v18 = 62;
        }
        else
        {
          if ( *v24 != 39 )
            goto LABEL_25;
          v18 = 39;
        }
        if ( !(unsigned int)sub_85D000((char **)&v24, (char *)a2, v18, &v23, v25, &v21, a5, a6) )
        {
          v7 = v24;
          goto LABEL_22;
        }
        v15 = v23;
        v11 = v21;
        v12 = -2145910784;
        v17 = v24;
        v13 = (int)v23;
        if ( !a4 )
          goto LABEL_20;
      }
      if ( (unsigned __int64)(v15 - a4) <= 0xFFFF )
      {
        v12 |= (_DWORD)v15 - (_DWORD)a4;
        v14 = a3;
        goto LABEL_8;
      }
LABEL_20:
      *a3 = -2146041856;
      a3[2] = v13;
      a3[1] = HIDWORD(v15);
      v14 = a3 + 3;
LABEL_8:
      *v14 = v12;
      a3 = v14 + 2;
      v14[1] = v11;
      v7 = v17;
      if ( v17 >= a2 )
      {
        *a5 = 114;
        goto LABEL_22;
      }
      if ( *v17 == 41 )
      {
        v7 = v17 + 1;
        result = a3;
        goto LABEL_23;
      }
      if ( *v17 != 44 )
      {
        *a5 = 124;
        goto LABEL_22;
      }
      a4 = v15;
    }
  }
  *a5 = 218;
LABEL_22:
  result = nullptr;
LABEL_23:
  *a1 = v7;
  return result;
}
