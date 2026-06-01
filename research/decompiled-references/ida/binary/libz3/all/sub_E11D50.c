const char *sub_E11D50()
{
  return "declare a new array map operator with name <symbol> using the given function declaration.\n"
         "<func-decl-ref> ::= <symbol>\n"
         "                  | (<symbol> (<sort>*) <sort>)\n"
         "                  | ((_ <symbol> <numeral>+) (<sort>*) <sort>)\n"
         "The last two cases are used to disambiguate between declarations with the same name and/or select (indexed) bui"
         "ltin declarations.\n"
         "For more details about the array map operator, see 'Generalized and Efficient Array Decision Procedures' (FMCAD"
         " 2009).\n"
         "Example: (declare-map set-union (Int) (or (Bool Bool) Bool))\n"
         "Declares a new function (declare-fun set-union ((Array Int Bool) (Array Int Bool)) (Array Int Bool)).\n"
         "The instance of the map axiom for this new declaration is:\n"
         "(forall ((a1 (Array Int Bool)) (a2 (Array Int Bool)) (i Int)) (= (select (set-union a1 a2) i) (or (select a1 i)"
         " (select a2 i))))";
}

