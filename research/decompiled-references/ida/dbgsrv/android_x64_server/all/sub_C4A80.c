/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C4A80
// Address: 0x00000000000C4A80

//----- (00000000000C4A80) ----------------------------------------------------
__int64 __fastcall sub_C4A80(unsigned int *a1, char *a2)
{
  unsigned int *v4; // r12
  unsigned int *v5; // rbp
  unsigned int *v6; // r15
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int *v10; // r13
  unsigned __int64 v11; // rcx
  int v12; // edx
  signed int v13; // esi
  unsigned int *v14; // rcx
  bool v15; // cc
  __int64 v16; // rdx
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  signed int v19; // edx
  bool v20; // cc
  bool v21; // cc
  __int64 v22; // rcx
  unsigned __int8 v23; // bp
  bool v24; // zf
  bool v25; // cc
  __int64 v26; // rax
  int v27; // eax
  bool v28; // cc
  int v29; // ecx
  unsigned int *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  bool v33; // cc
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  bool v36; // cc
  unsigned int *v37; // rdi
  __int64 *v38; // rbx
  __int64 v39; // rax
  bool v40; // cc
  __int64 v41; // rcx
  bool v42; // cc
  __int64 v43; // rcx
  unsigned int *v44; // [rsp+0h] [rbp-38h]

  while ( 2 )
  {
    v4 = (unsigned int *)(a2 - 8);
    v5 = (unsigned int *)(a2 - 16);
LABEL_3:
    v6 = a1;
    v7 = a2 - (char *)a1;
    result = (a2 - (char *)a1) >> 3;
    switch ( result )
    {
      case 0LL:
      case 1LL:
        return result;
      case 2LL:
        result = *a1;
        if ( *((_DWORD *)a2 - 2) == (_DWORD)result )
        {
          result = *((unsigned int *)a2 - 1);
          if ( (int)result >= (int)a1[1] )
            return result;
        }
        else if ( *((_DWORD *)a2 - 2) >= (int)result )
        {
          return result;
        }
        result = *(_QWORD *)a1;
        *(_QWORD *)a1 = *((_QWORD *)a2 - 1);
        *((_QWORD *)a2 - 1) = result;
        return result;
      case 3LL:
        return sub_C4FC0(a1, a1 + 2, (_DWORD *)a2 - 2);
      case 4LL:
        v38 = (__int64 *)(a1 + 4);
        sub_C4FC0(a1, a1 + 2, a1 + 4);
        result = a1[4];
        if ( *((_DWORD *)a2 - 2) == (_DWORD)result )
        {
          result = *((unsigned int *)a2 - 1);
          if ( (int)result >= (int)a1[5] )
            return result;
        }
        else if ( *((_DWORD *)a2 - 2) >= (int)result )
        {
          return result;
        }
        v39 = *v38;
        *v38 = *((_QWORD *)a2 - 1);
        *((_QWORD *)a2 - 1) = v39;
        result = a1[2];
        v40 = *(_DWORD *)v38 < (int)result;
        if ( *(_DWORD *)v38 == (_DWORD)result )
        {
          result = a1[5];
          v40 = (int)result < (int)a1[3];
        }
        if ( v40 )
        {
          v41 = *((_QWORD *)a1 + 1);
          result = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 1) = result;
          *((_QWORD *)a1 + 2) = v41;
          v42 = (int)*a1 <= (int)result;
          if ( *a1 == (_DWORD)result )
            v42 = (int)a1[1] <= SHIDWORD(result);
          if ( !v42 )
          {
            v43 = *(_QWORD *)a1;
            *(_QWORD *)a1 = result;
            *((_QWORD *)a1 + 1) = v43;
          }
        }
        return result;
      case 5LL:
        return sub_C5070(a1, a1 + 2, a1 + 4, a1 + 6, (_DWORD *)a2 - 2);
      default:
        if ( v7 <= 247 )
        {
          v30 = a1 + 4;
          sub_C4FC0(a1, a1 + 2, a1 + 4);
          result = (__int64)(a1 + 6);
          if ( a1 + 6 != (unsigned int *)a2 )
          {
            v31 = -16;
            v32 = -16LL - (_QWORD)a1;
            do
            {
              v33 = *(_DWORD *)result < (int)*v30;
              if ( *(_DWORD *)result == *v30 )
                v33 = *(_DWORD *)(result + 4) < (int)v30[1];
              if ( v33 )
              {
                v34 = *(_QWORD *)result;
                *(_QWORD *)result = *(_QWORD *)v30;
                if ( v30 == a1 )
                {
                  v37 = v30;
                }
                else
                {
                  v35 = 0;
                  while ( 1 )
                  {
                    v36 = (int)v30[v35 / 4 - 2] <= (int)v34;
                    if ( v30[v35 / 4 - 2] == (_DWORD)v34 )
                      v36 = (int)v30[v35 / 4 - 1] <= SHIDWORD(v34);
                    if ( v36 )
                      break;
                    *(_QWORD *)&v30[v35 / 4] = *(_QWORD *)&v30[v35 / 4 - 2];
                    v35 -= 8LL;
                    if ( v31 == v35 )
                    {
                      v37 = a1;
                      goto LABEL_92;
                    }
                  }
                  v37 = (unsigned int *)(v35 - v32);
                }
LABEL_92:
                *(_QWORD *)v37 = v34;
              }
              result += 8;
              v32 -= 8;
              v30 += 2;
              v31 -= 8;
            }
            while ( (char *)result != a2 );
          }
          return result;
        }
        v9 = result / 2;
        v10 = &a1[2 * (result / 2)];
        if ( v7 < 7993 )
        {
          result = sub_C4FC0(v6, &v6[2 * (result / 2)], (_DWORD *)a2 - 2);
        }
        else
        {
          v11 = (2 * (result + ((unsigned __int64)(result >> 63) >> 62))) & 0xFFFFFFFFFFFFFFF8LL;
          result = sub_C5070(
                     v6,
                     (unsigned int *)((char *)v6 + v11),
                     &v6[2 * (result / 2)],
                     (unsigned int *)((char *)v10 + v11),
                     (_DWORD *)a2 - 2);
        }
        v12 = *v6;
        v13 = *v10;
        if ( *v6 == *v10 )
        {
          if ( (int)v6[1] >= (int)v6[2 * v9 + 1] )
            goto LABEL_10;
LABEL_17:
          v14 = (unsigned int *)(a2 - 8);
          goto LABEL_19;
        }
        if ( v12 < v13 )
          goto LABEL_17;
LABEL_10:
        v14 = v5;
        if ( v6 == v5 )
        {
LABEL_43:
          a1 = v6 + 2;
          if ( v12 == *v4 )
          {
            result = v6[1];
            if ( (int)result >= *((_DWORD *)a2 - 1) )
              goto LABEL_45;
          }
          else if ( v12 >= (int)*v4 )
          {
LABEL_45:
            if ( a1 == v4 )
              return result;
            a1 = v6 + 4;
            while ( 1 )
            {
              v25 = v12 < (int)*(a1 - 2);
              if ( v12 == *(a1 - 2) )
              {
                result = v6[1];
                v25 = (int)result < (int)*(a1 - 1);
              }
              if ( v25 )
                break;
              a1 += 2;
              if ( a2 == (char *)a1 )
                return result;
            }
            result = *((_QWORD *)a1 - 1);
            *((_QWORD *)a1 - 1) = *(_QWORD *)v4;
            *(_QWORD *)v4 = result;
            if ( a1 == v4 )
              return result;
            while ( 1 )
            {
LABEL_58:
              v27 = *v6;
              v28 = (int)*v6 < (int)*a1;
              if ( *v6 == *a1 )
              {
LABEL_59:
                if ( (int)v6[1] < (int)a1[1] )
                  goto LABEL_62;
                goto LABEL_60;
              }
              while ( !v28 )
              {
LABEL_60:
                a1 += 2;
                v28 = v27 < (int)*a1;
                if ( v27 == *a1 )
                  goto LABEL_59;
              }
              do
              {
LABEL_62:
                while ( 1 )
                {
                  v4 -= 2;
                  if ( v27 != *v4 )
                    break;
                  if ( (int)v6[1] >= (int)v4[1] )
                    goto LABEL_66;
                }
              }
              while ( v27 < (int)*v4 );
LABEL_66:
              if ( a1 >= v4 )
                break;
              v26 = *(_QWORD *)a1;
              *(_QWORD *)a1 = *(_QWORD *)v4;
              *(_QWORD *)v4 = v26;
              a1 += 2;
            }
            LOBYTE(result) = 4;
LABEL_68:
            result = (unsigned __int8)result;
            v29 = 21;
            if ( _bittest(&v29, (unsigned __int8)result) )
              continue;
            return result;
          }
          if ( a1 != v4 )
            goto LABEL_58;
          return result;
        }
        while ( 1 )
        {
          v15 = (int)*v14 < v13;
          if ( *v14 == v13 )
            v15 = (int)v14[1] < (int)v6[2 * v9 + 1];
          if ( v15 )
            break;
          v14 -= 2;
          if ( v6 == v14 )
            goto LABEL_43;
        }
        v16 = *(_QWORD *)v6;
        *(_QWORD *)v6 = *(_QWORD *)v14;
        *(_QWORD *)v14 = v16;
        LODWORD(result) = result + 1;
LABEL_19:
        v17 = v6 + 2;
        if ( v6 + 2 < v14 )
        {
          while ( 1 )
          {
            v19 = *v10;
            v20 = (int)*v17 < (int)*v10;
            if ( *v17 == *v10 )
            {
LABEL_25:
              if ( (int)v17[1] >= (int)v10[1] )
                goto LABEL_28;
              goto LABEL_26;
            }
            while ( v20 )
            {
LABEL_26:
              v17 += 2;
              v20 = (int)*v17 < v19;
              if ( *v17 == v19 )
                goto LABEL_25;
            }
            do
            {
LABEL_28:
              while ( 1 )
              {
                v14 -= 2;
                if ( *v14 != v19 )
                  break;
                if ( (int)v14[1] < (int)v10[1] )
                  goto LABEL_32;
              }
            }
            while ( (int)*v14 >= v19 );
LABEL_32:
            if ( v17 > v14 )
              break;
            v18 = *(_QWORD *)v17;
            *(_QWORD *)v17 = *(_QWORD *)v14;
            *(_QWORD *)v14 = v18;
            LODWORD(result) = result + 1;
            if ( v10 == v17 )
              v10 = v14;
            v17 += 2;
          }
        }
        if ( v17 != v10 )
        {
          v21 = (int)*v10 < (int)*v17;
          if ( *v10 == *v17 )
            v21 = (int)v10[1] < (int)v17[1];
          if ( v21 )
          {
            v22 = *(_QWORD *)v17;
            *(_QWORD *)v17 = *(_QWORD *)v10;
            *(_QWORD *)v10 = v22;
            LODWORD(result) = result + 1;
          }
        }
        if ( (_DWORD)result )
        {
LABEL_41:
          if ( (char *)v17 - (char *)v6 < a2 - (char *)v17 )
          {
            sub_C4A80(v6, v17);
            a1 = v17 + 2;
            goto LABEL_3;
          }
          sub_C4A80(v17 + 2, a2);
          a2 = (char *)v17;
          a1 = v6;
          continue;
        }
        v44 = v5;
        v23 = sub_C51A0(v6, v17);
        a1 = v17 + 2;
        if ( !(unsigned __int8)sub_C51A0(v17 + 2, a2) )
        {
          v24 = v23 == 0;
          v5 = v44;
          if ( !v24 )
            goto LABEL_3;
          goto LABEL_41;
        }
        if ( !v23 )
          a2 = (char *)v17;
        result = 2 - (unsigned int)v23;
        a1 = v6;
        if ( (unsigned __int8)(2 - v23) <= 4u )
          goto LABEL_68;
        return result;
    }
  }
}
