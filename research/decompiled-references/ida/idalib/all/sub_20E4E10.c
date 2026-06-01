__int64 __fastcall sub_20E4E10(_DWORD *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  _DWORD *vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD *p_ptr; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  _DWORD *ptr; // [rsp+18h] [rbp+18h] BYREF
  unsigned __int64 vars20; // [rsp+20h] [rbp+20h]

  v4 = (unsigned int)a1[66];
  v5 = *a2;
  vars0 = a1;
  p_ptr = &ptr;
  vars10 = 0x400000000LL;
  v6 = (unsigned int)a1[67];
  if ( !(_DWORD)v4 )
  {
    if ( (_DWORD)v6 )
    {
      if ( v5 > a1[1] )
      {
        if ( (_DWORD)v6 == 1 || v5 <= a1[3] )
        {
          v4 = 1;
        }
        else if ( (_DWORD)v6 == 2 || v5 <= a1[5] )
        {
          v4 = 2;
        }
        else if ( (_DWORD)v6 == 3 || v5 <= a1[7] )
        {
          v4 = 3;
        }
        else if ( (_DWORD)v6 == 4 || v5 <= a1[9] )
        {
          v4 = 4;
        }
        else if ( (_DWORD)v6 == 5 || v5 <= a1[11] )
        {
          v4 = 5;
        }
        else if ( (_DWORD)v6 == 6 || v5 <= a1[13] )
        {
          v4 = 6;
        }
        else if ( (_DWORD)v6 == 7 || v5 <= a1[15] )
        {
          v4 = 7;
        }
        else if ( (_DWORD)v6 == 8 || v5 <= a1[17] )
        {
          v4 = 8;
        }
        else if ( (_DWORD)v6 == 9 || v5 <= a1[19] )
        {
          v4 = 9;
        }
        else if ( (_DWORD)v6 == 10 || v5 <= a1[21] )
        {
          v4 = 10;
        }
        else if ( (_DWORD)v6 == 11 || v5 <= a1[23] )
        {
          v4 = 11;
        }
        else if ( (_DWORD)v6 == 12 || v5 <= a1[25] )
        {
          v4 = 12;
        }
        else if ( (_DWORD)v6 == 13 || v5 <= a1[27] )
        {
          v4 = 13;
        }
        else if ( (_DWORD)v6 == 14 || v5 <= a1[29] )
        {
          v4 = 14;
        }
        else if ( (_DWORD)v6 == 15 )
        {
          v4 = 15;
        }
        else
        {
          v4 = (unsigned int)(v5 > a1[31]) + 15;
        }
      }
    }
    else
    {
      v4 = 0;
    }
    LODWORD(vars10) = 1;
    v7 = (v4 << 32) | v6;
    ptr = a1;
    v8 = 1;
    v9 = &ptr;
    vars20 = v7;
    v10 = HIDWORD(v7);
    goto LABEL_35;
  }
  if ( (_DWORD)v6 && v5 > a1[44] )
  {
    v14 = a1 + 45;
    LODWORD(v15) = 0;
    while ( 1 )
    {
      v15 = (unsigned int)(v15 + 1);
      if ( (_DWORD)v6 == (_DWORD)v15 )
        break;
      if ( v5 <= *v14++ )
        goto LABEL_45;
    }
    v15 = (unsigned int)v6;
  }
  else
  {
    v15 = 0;
  }
LABEL_45:
  LODWORD(vars10) = 1;
  ptr = a1 + 2;
  vars20 = (v15 << 32) | v6;
  if ( HIDWORD(vars20) >= (unsigned int)v6 )
  {
    v9 = &ptr;
    goto LABEL_47;
  }
  sub_20E4750((__int64)&vars0, v5);
  v8 = (unsigned int)vars10;
  v9 = p_ptr;
  if ( (_DWORD)vars10 )
  {
    LODWORD(v7) = *((_DWORD *)p_ptr + 2);
    LODWORD(v10) = *((_DWORD *)p_ptr + 3);
LABEL_35:
    if ( (unsigned int)v10 < (unsigned int)v7 )
    {
      v11 = a2[1];
      v12 = v9[2 * v8 - 2] + 8LL * HIDWORD(v9[2 * v8 - 1]);
      v13 = *(_DWORD *)v12;
      if ( vars0[66] )
      {
        if ( v11 >= v13 )
          v2 = *(_QWORD *)(v12 + 96);
      }
      else if ( v11 >= v13 )
      {
        v2 = *(_QWORD *)(v12 + 128);
      }
    }
  }
LABEL_47:
  if ( v9 != &vars0 )
    free(v9);
  return v2;
}
